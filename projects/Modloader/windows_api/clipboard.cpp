#include "clipboard.h"
#include <Modloader/windows_api/windows.h>

namespace modloader::win {
    void copy_text_to_clipboard(const std::string& text) {
        auto memory = GlobalAlloc(GMEM_FIXED, text.length() + 1);
        memcpy(memory, text.c_str(), text.length() + 1);

        OpenClipboard(0);
        EmptyClipboard();
        SetClipboardData(CF_TEXT, memory);
        CloseClipboard();
    }
}