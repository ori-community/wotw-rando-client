#pragma once
#include <Modloader/app/structs/CameraManager.h>
#include <Modloader/app/structs/CameraManager__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CameraManager {
        inline app::CameraManager__Class** type_info() {
            static app::CameraManager__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CameraManager__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CameraManager__Class* get_class() {
            return il2cpp::get_class<app::CameraManager__Class>(type_info(), "", "CameraManager");
        }
        inline app::CameraManager* create() {
            return il2cpp::create_object<app::CameraManager>(get_class());
        }
    } // namespace CameraManager
} // namespace app::classes::types
