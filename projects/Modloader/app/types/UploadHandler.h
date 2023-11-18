#pragma once
#include <Modloader/app/structs/UploadHandler.h>
#include <Modloader/app/structs/UploadHandler__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UploadHandler {
        inline app::UploadHandler__Class** type_info() {
            static app::UploadHandler__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UploadHandler__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UploadHandler__Class* get_class() {
            return il2cpp::get_class<app::UploadHandler__Class>(type_info(), "UnityEngine.Networking", "UploadHandler");
        }
        inline app::UploadHandler* create() {
            return il2cpp::create_object<app::UploadHandler>(get_class());
        }
    } // namespace UploadHandler
} // namespace app::classes::types
