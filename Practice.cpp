#include <iostream>
#include <string>



int main()
{
    // icu library
    // MultiByteToWideChar
    const char c[] = u8"\u0444\u0444\u0444\u0444\u0444\u0444\u0444\u0444";
    wchar_t res[100] = {};
    int resSize = MultiByteToWideChar(CP_UTF8, 0, c, sizeof(c), &res[0], sizeof(res));
    SetWindowText(GetConsoleWindow(), res);

    // stl
    std::string str = "Hello, world!!!";
    std::wstring_convert<std::codecvt_utf8_utf16<char16_t>, char16_t> convert;
    std::u16string dest = convert.from_bytes(str);

}