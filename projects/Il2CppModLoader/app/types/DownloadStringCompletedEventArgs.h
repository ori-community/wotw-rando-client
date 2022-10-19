#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace DownloadStringCompletedEventArgs {
        inline app::DownloadStringCompletedEventArgs__Class** type_info = (app::DownloadStringCompletedEventArgs__Class**)(modloader::win::memory::resolve_rva(0x04756B58));
        inline app::DownloadStringCompletedEventArgs__Class* get_class() {
            return il2cpp::get_class<app::DownloadStringCompletedEventArgs__Class>(type_info, "System.Net", "DownloadStringCompletedEventArgs");
        }
        inline app::DownloadStringCompletedEventArgs* create() {
            return il2cpp::create_object<app::DownloadStringCompletedEventArgs>(get_class());
        }
    } // namespace DownloadStringCompletedEventArgs
} // namespace app::classes::types
