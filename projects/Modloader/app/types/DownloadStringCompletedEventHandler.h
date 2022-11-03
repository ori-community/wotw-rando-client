#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace DownloadStringCompletedEventHandler {
        inline app::DownloadStringCompletedEventHandler__Class** type_info = (app::DownloadStringCompletedEventHandler__Class**)(modloader::win::memory::resolve_rva(0x04705768));
        inline app::DownloadStringCompletedEventHandler__Class* get_class() {
            return il2cpp::get_class<app::DownloadStringCompletedEventHandler__Class>(type_info, "System.Net", "DownloadStringCompletedEventHandler");
        }
        inline app::DownloadStringCompletedEventHandler* create() {
            return il2cpp::create_object<app::DownloadStringCompletedEventHandler>(get_class());
        }
    } // namespace DownloadStringCompletedEventHandler
} // namespace app::classes::types
