#pragma once
#include <Modloader/app/structs/DownloadStringCompletedEventArgs.h>
#include <Modloader/app/structs/DownloadStringCompletedEventArgs__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DownloadStringCompletedEventArgs {
        inline app::DownloadStringCompletedEventArgs__Class** type_info() {
            static app::DownloadStringCompletedEventArgs__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DownloadStringCompletedEventArgs__Class**)(modloader::win::memory::resolve_rva(0x04756B58));
            }
            return cache;
        }
        inline app::DownloadStringCompletedEventArgs__Class* get_class() {
            return il2cpp::get_class<app::DownloadStringCompletedEventArgs__Class>(type_info(), "System.Net", "DownloadStringCompletedEventArgs");
        }
        inline app::DownloadStringCompletedEventArgs* create() {
            return il2cpp::create_object<app::DownloadStringCompletedEventArgs>(get_class());
        }
    } // namespace DownloadStringCompletedEventArgs
} // namespace app::classes::types
