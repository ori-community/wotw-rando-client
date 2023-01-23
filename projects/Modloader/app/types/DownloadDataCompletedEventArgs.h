#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/DownloadDataCompletedEventArgs__Class.h>
#include <Modloader/app/structs/DownloadDataCompletedEventArgs.h>

namespace app::classes::types {
    namespace DownloadDataCompletedEventArgs {
        inline app::DownloadDataCompletedEventArgs__Class** type_info = (app::DownloadDataCompletedEventArgs__Class**)(modloader::win::memory::resolve_rva(0x047881B8));
        inline app::DownloadDataCompletedEventArgs__Class* get_class() {
            return il2cpp::get_class<app::DownloadDataCompletedEventArgs__Class>(type_info, "System.Net", "DownloadDataCompletedEventArgs");
        }
        inline app::DownloadDataCompletedEventArgs* create() {
            return il2cpp::create_object<app::DownloadDataCompletedEventArgs>(get_class());
        }
    } // namespace DownloadDataCompletedEventArgs
} // namespace app::classes::types
