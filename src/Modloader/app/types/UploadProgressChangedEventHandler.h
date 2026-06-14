#pragma once
#include <Modloader/app/structs/UploadProgressChangedEventHandler.h>
#include <Modloader/app/structs/UploadProgressChangedEventHandler__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UploadProgressChangedEventHandler {
        inline app::UploadProgressChangedEventHandler__Class** type_info() {
            static app::UploadProgressChangedEventHandler__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UploadProgressChangedEventHandler__Class**)(modloader::win::memory::resolve_rva(0x0477E9E0));
            }
            return cache;
        }
        inline app::UploadProgressChangedEventHandler__Class* get_class() {
            return il2cpp::get_class<app::UploadProgressChangedEventHandler__Class>(type_info(), "System.Net", "UploadProgressChangedEventHandler");
        }
        inline app::UploadProgressChangedEventHandler* create() {
            return il2cpp::create_object<app::UploadProgressChangedEventHandler>(get_class());
        }
    } // namespace UploadProgressChangedEventHandler
} // namespace app::classes::types
