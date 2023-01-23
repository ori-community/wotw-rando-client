#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/DownloadProgressChangedEventArgs__Class.h>
#include <Modloader/app/structs/DownloadProgressChangedEventArgs.h>

namespace app::classes::types {
    namespace DownloadProgressChangedEventArgs {
        inline app::DownloadProgressChangedEventArgs__Class** type_info = (app::DownloadProgressChangedEventArgs__Class**)(modloader::win::memory::resolve_rva(0x0473D0D8));
        inline app::DownloadProgressChangedEventArgs__Class* get_class() {
            return il2cpp::get_class<app::DownloadProgressChangedEventArgs__Class>(type_info, "System.Net", "DownloadProgressChangedEventArgs");
        }
        inline app::DownloadProgressChangedEventArgs* create() {
            return il2cpp::create_object<app::DownloadProgressChangedEventArgs>(get_class());
        }
    } // namespace DownloadProgressChangedEventArgs
} // namespace app::classes::types
