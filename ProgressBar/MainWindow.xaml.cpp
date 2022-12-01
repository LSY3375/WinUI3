#include "pch.h"
#include <microsoft.ui.xaml.window.h>
#include "MainWindow.xaml.h"
#if __has_include("MainWindow.g.cpp")
#include "MainWindow.g.cpp"
#endif

using namespace winrt;
using namespace Microsoft::UI::Xaml;

// To learn more about WinUI, the WinUI project structure,
// and more about our project templates, see: http://aka.ms/winui-project-info.

namespace winrt::App7::implementation
{
    MainWindow::MainWindow()
    {
        InitializeComponent();

        auto windowNative{ this->try_as<::IWindowNative>() };
        HWND hWnd{ 0 };
        windowNative->get_WindowHandle(&hWnd);
        SetWindowPos(hWnd, NULL, 200, 200, 390, 290, NULL);
        this->Title(L"프로그래스 바 실습");
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

void winrt::App7::implementation::MainWindow::PausedRB_Checked(winrt::Windows::Foundation::IInspectable const& /*sender*/, winrt::Microsoft::UI::Xaml::RoutedEventArgs const& /*e*/)
{
    ProgressBar().ShowPaused(true);
    ProgressBar().ShowError(false);
    ProgressBar().IsIndeterminate(true);
}


void winrt::App7::implementation::MainWindow::ErrorRB_Checked(winrt::Windows::Foundation::IInspectable const& /*sender*/, winrt::Microsoft::UI::Xaml::RoutedEventArgs const& /*e*/)
{
    ProgressBar().ShowPaused(false);
    ProgressBar().ShowError(true);
    ProgressBar().IsIndeterminate(true);
}


void winrt::App7::implementation::MainWindow::RunningRB_Checked(winrt::Windows::Foundation::IInspectable const& /*sender*/, winrt::Microsoft::UI::Xaml::RoutedEventArgs const& /*e*/)
{
    ProgressBar().ShowPaused(false);
    ProgressBar().ShowError(false);
    ProgressBar().IsIndeterminate(true);
}
