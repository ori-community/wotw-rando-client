#pragma once
#include <Modloader/app/structs/DownloadDataCompletedEventHandler.h>
#include <Modloader/app/structs/DownloadDataCompletedEventHandler__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DownloadDataCompletedEventHandler {
        inline app::DownloadDataCompletedEventHandler__Class** type_info() {
            static app::DownloadDataCompletedEventHandler__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DownloadDataCompletedEventHandler__Class**)(modloader::win::memory::resolve_rva(0x04706588));
            }
            return cache;
        }
        inline app::DownloadDataCompletedEventHandler__Class* get_class() {
            return il2cpp::get_class<app::DownloadDataCompletedEventHandler__Class>(type_info(), "System.Net", "DownloadDataCompletedEventHandler");
        }
        inline app::DownloadDataCompletedEventHandler* create() {
            return il2cpp::create_object<app::DownloadDataCompletedEventHandler>(get_class());
        }
    } // namespace DownloadDataCompletedEventHandler
} // namespace app::classes::types
