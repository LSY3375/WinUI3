#include "pch.h"
#include "MainWindow.xaml.h"
#if __has_include("MainWindow.g.cpp")
#include "MainWindow.g.cpp"
#endif

using namespace winrt;
using namespace Microsoft::UI::Xaml;
using namespace std;
// To learn more about WinUI, the WinUI project structure,
// and more about our project templates, see: http://aka.ms/winui-project-info.

namespace winrt::Final1::implementation
{
    MainWindow::MainWindow()
    {
        InitializeComponent();
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


void winrt::Final1::implementation::MainWindow::btn1_Click(winrt::Windows::Foundation::IInspectable const& sender, winrt::Microsoft::UI::Xaml::RoutedEventArgs const& e)
{
    double a, b, c;
    a = std::stod(va().Text().c_str());
    b = std::stod(vb().Text().c_str());
    c = a + b;
    vc().Text(std::to_wstring(c));
}


void winrt::Final1::implementation::MainWindow::btn2_Click(winrt::Windows::Foundation::IInspectable const& sender, winrt::Microsoft::UI::Xaml::RoutedEventArgs const& e)
{
    double a, b, c;
    a = std::stod(va().Text().c_str());
    b = std::stod(vb().Text().c_str());
    c = a - b;
    vc().Text(std::to_wstring(c));
}


void winrt::Final1::implementation::MainWindow::btn3_Click(winrt::Windows::Foundation::IInspectable const& sender, winrt::Microsoft::UI::Xaml::RoutedEventArgs const& e)
{
    double a, b, c;
    a = std::stod(va().Text().c_str());
    b = std::stod(vb().Text().c_str());
    c = a * b;
    vc().Text(std::to_wstring(c));
}


void winrt::Final1::implementation::MainWindow::btn4_Click(winrt::Windows::Foundation::IInspectable const& sender, winrt::Microsoft::UI::Xaml::RoutedEventArgs const& e)
{
    double a, b, c;
    a = stod(va().Text().c_str());
    b = stod(vb().Text().c_str());
    c = a / b;
    vc().Text(to_wstring(c));
}
