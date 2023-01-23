#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/DownloadProgressChangedEventHandler__Class.h>
#include <Modloader/app/structs/DownloadProgressChangedEventHandler.h>

namespace app::classes::types {
    namespace DownloadProgressChangedEventHandler {
        inline app::DownloadProgressChangedEventHandler__Class** type_info = (app::DownloadProgressChangedEventHandler__Class**)(modloader::win::memory::resolve_rva(0x04707318));
        inline app::DownloadProgressChangedEventHandler__Class* get_class() {
            return il2cpp::get_class<app::DownloadProgressChangedEventHandler__Class>(type_info, "System.Net", "DownloadProgressChangedEventHandler");
        }
        inline app::DownloadProgressChangedEventHandler* create() {
            return il2cpp::create_object<app::DownloadProgressChangedEventHandler>(get_class());
        }
    } // namespace DownloadProgressChangedEventHandler
} // namespace app::classes::types
