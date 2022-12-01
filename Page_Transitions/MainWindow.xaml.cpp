#include "pch.h"
#include <winrt/Windows.UI.Xaml.Interop.h>
#include <microsoft.ui.xaml.window.h>
#include <winrt/Microsoft.UI.Xaml.Media.h>
#include "MainWindow.xaml.h"
#if __has_include("MainWindow.g.cpp")
#include "MainWindow.g.cpp"
#endif

using namespace winrt;
using namespace Microsoft::UI::Xaml;
using namespace Microsoft::UI::Xaml::Navigation;
using namespace Microsoft::UI::Xaml::Media::Animation;
using namespace Microsoft::UI::Xaml::Controls;

// To learn more about WinUI, the WinUI project structure,
// and more about our project templates, see: http://aka.ms/winui-project-info.

namespace winrt::App1::implementation
{
    MainWindow::MainWindow()
    {
        InitializeComponent();

        auto windowNative{ this->try_as<::IWindowNative>() };
        HWND hWnd{ 0 };
        windowNative->get_WindowHandle(&hWnd);
        SetWindowPos(hWnd, NULL, 235, 20, 1450, 990, NULL);
        this->Title(L"Page Transition ½Ç½À");

        ContentFrame1().Navigate(xaml_typename<Page1>());
        ContentFrame2().Navigate(xaml_typename<Page1>());
        ContentFrame3().Navigate(xaml_typename<Page1>());
        ContentFrame4().Navigate(xaml_typename<Page1>());
        ContentFrame5().Navigate(xaml_typename<Page1>());
        ContentFrame6().Navigate(xaml_typename<Page1>());
    }

    int32_t MainWindow::MyProperty()
    {
        throw hresult_not_implemented();
    }

    void MainWindow::MyProperty(int32_t /* value */)
    {
        throw hresult_not_implemented();
    }
}

void winrt::App1::implementation::MainWindow::ForwardButton1_Click(winrt::Windows::Foundation::IInspectable const&, winrt::Microsoft::UI::Xaml::RoutedEventArgs const&)
{
    if (flag1)
    {
        ContentFrame1().Navigate(xaml_typename<Page2>());
        flag1 = false;
    }
    else
    {
        ContentFrame1().Navigate(xaml_typename<Page1>());
        flag1 = true;
    }
}

void winrt::App1::implementation::MainWindow::BackwardButton1_Click(winrt::Windows::Foundation::IInspectable const&, winrt::Microsoft::UI::Xaml::RoutedEventArgs const&)
{
    if (ContentFrame1().BackStackDepth() > 0)
    {
        ContentFrame1().GoBack();
    }
}

void winrt::App1::implementation::MainWindow::ForwardButton2_Click(winrt::Windows::Foundation::IInspectable const&, winrt::Microsoft::UI::Xaml::RoutedEventArgs const&)
{
    if (flag2)
    {
        ContentFrame2().Navigate(xaml_typename<Page2>());
        flag2 = false;
    }
    else
    {
        ContentFrame2().Navigate(xaml_typename<Page1>());
        flag2 = true;
    }
}

void winrt::App1::implementation::MainWindow::BackwardButton2_Click(winrt::Windows::Foundation::IInspectable const&, winrt::Microsoft::UI::Xaml::RoutedEventArgs const&)
{
    if (ContentFrame2().BackStackDepth() > 0)
    {
        ContentFrame2().GoBack();
    }
}

void winrt::App1::implementation::MainWindow::ForwardButton3_Click(winrt::Windows::Foundation::IInspectable const&, winrt::Microsoft::UI::Xaml::RoutedEventArgs const&)
{
    if (flag3)
    {
        ContentFrame3().Navigate(xaml_typename<Page2>());
        flag3 = false;
    }
    else
    {
        ContentFrame3().Navigate(xaml_typename<Page1>());
        flag3 = true;
    }
}

void winrt::App1::implementation::MainWindow::BackwardButton3_Click(winrt::Windows::Foundation::IInspectable const&, winrt::Microsoft::UI::Xaml::RoutedEventArgs const&)
{
    if (ContentFrame3().BackStackDepth() > 0)
    {
        ContentFrame3().GoBack();
    }
}

void winrt::App1::implementation::MainWindow::ForwardButton4_Click(winrt::Windows::Foundation::IInspectable const&, winrt::Microsoft::UI::Xaml::RoutedEventArgs const&)
{
    if (flag4)
    {
        ContentFrame4().Navigate(xaml_typename<Page2>());
        flag4 = false;
    }
    else
    {
        ContentFrame4().Navigate(xaml_typename<Page1>());
        flag4 = true;
    }
}

void winrt::App1::implementation::MainWindow::BackwardButton4_Click(winrt::Windows::Foundation::IInspectable const&, winrt::Microsoft::UI::Xaml::RoutedEventArgs const&)
{
    if (ContentFrame4().BackStackDepth() > 0)
    {
        ContentFrame4().GoBack();
    }
}

void winrt::App1::implementation::MainWindow::ForwardButton5_Click(winrt::Windows::Foundation::IInspectable const&, winrt::Microsoft::UI::Xaml::RoutedEventArgs const&)
{
    if (flag5)
    {
        ContentFrame5().Navigate(xaml_typename<Page2>());
        flag5 = false;
    }
    else
    {
        ContentFrame5().Navigate(xaml_typename<Page1>());
        flag5 = true;
    }
}

void winrt::App1::implementation::MainWindow::BackwardButton5_Click(winrt::Windows::Foundation::IInspectable const&, winrt::Microsoft::UI::Xaml::RoutedEventArgs const&)
{
    if (ContentFrame5().BackStackDepth() > 0)
    {
        ContentFrame5().GoBack();
    }
}

void winrt::App1::implementation::MainWindow::ForwardButton6_Click(winrt::Windows::Foundation::IInspectable const&, winrt::Microsoft::UI::Xaml::RoutedEventArgs const&)
{
    if (flag6)
    {
        ContentFrame6().Navigate(xaml_typename<Page2>());
        flag6 = false;
    }
    else
    {
        ContentFrame6().Navigate(xaml_typename<Page1>());
        flag6 = true;
    }
}

void winrt::App1::implementation::MainWindow::BackwardButton6_Click(winrt::Windows::Foundation::IInspectable const&, winrt::Microsoft::UI::Xaml::RoutedEventArgs const&)
{
    if (ContentFrame6().BackStackDepth() > 0)
    {
        ContentFrame6().GoBack();
    }
}