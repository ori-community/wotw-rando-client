#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/DownloadDataCompletedEventHandler__Class.h>
#include <Modloader/app/structs/DownloadDataCompletedEventHandler.h>

namespace app::classes::types {
    namespace DownloadDataCompletedEventHandler {
        inline app::DownloadDataCompletedEventHandler__Class** type_info = (app::DownloadDataCompletedEventHandler__Class**)(modloader::win::memory::resolve_rva(0x04706588));
        inline app::DownloadDataCompletedEventHandler__Class* get_class() {
            return il2cpp::get_class<app::DownloadDataCompletedEventHandler__Class>(type_info, "System.Net", "DownloadDataCompletedEventHandler");
        }
        inline app::DownloadDataCompletedEventHandler* create() {
            return il2cpp::create_object<app::DownloadDataCompletedEventHandler>(get_class());
        }
    } // namespace DownloadDataCompletedEventHandler
} // namespace app::classes::types
