#pragma once
#include <Modloader/app/structs/DownloadStringCompletedEventHandler.h>
#include <Modloader/app/structs/DownloadStringCompletedEventHandler__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DownloadStringCompletedEventHandler {
        inline app::DownloadStringCompletedEventHandler__Class** type_info() {
            static app::DownloadStringCompletedEventHandler__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DownloadStringCompletedEventHandler__Class**)(modloader::win::memory::resolve_rva(0x04705768));
            }
            return cache;
        }
        inline app::DownloadStringCompletedEventHandler__Class* get_class() {
            return il2cpp::get_class<app::DownloadStringCompletedEventHandler__Class>(type_info(), "System.Net", "DownloadStringCompletedEventHandler");
        }
        inline app::DownloadStringCompletedEventHandler* create() {
            return il2cpp::create_object<app::DownloadStringCompletedEventHandler>(get_class());
        }
    } // namespace DownloadStringCompletedEventHandler
} // namespace app::classes::types
