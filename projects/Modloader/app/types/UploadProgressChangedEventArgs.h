#pragma once
#include <Modloader/app/structs/UploadProgressChangedEventArgs.h>
#include <Modloader/app/structs/UploadProgressChangedEventArgs__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UploadProgressChangedEventArgs {
        inline app::UploadProgressChangedEventArgs__Class** type_info() {
            static app::UploadProgressChangedEventArgs__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UploadProgressChangedEventArgs__Class**)(modloader::win::memory::resolve_rva(0x04763DC0));
            }
            return cache;
        }
        inline app::UploadProgressChangedEventArgs__Class* get_class() {
            return il2cpp::get_class<app::UploadProgressChangedEventArgs__Class>(type_info(), "System.Net", "UploadProgressChangedEventArgs");
        }
        inline app::UploadProgressChangedEventArgs* create() {
            return il2cpp::create_object<app::UploadProgressChangedEventArgs>(get_class());
        }
    } // namespace UploadProgressChangedEventArgs
} // namespace app::classes::types
