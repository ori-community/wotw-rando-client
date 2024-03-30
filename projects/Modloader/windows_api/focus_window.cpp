#include <Modloader/modloader.h>
#include <Modloader/windows_api/focus_window.h>
#include <Modloader/windows_api/windows.h>

namespace modloader::win {
    void focus_window(const std::string& window_name) {
        const auto window_handle = FindWindowA(nullptr, window_name.c_str());
        if (window_handle != nullptr) {
            SetForegroundWindow(window_handle);
        } else {
            modloader::warn("focus_window", std::format("Failed to focus window '{}'", window_name));
        }
    }
} // namespace modloader::win
