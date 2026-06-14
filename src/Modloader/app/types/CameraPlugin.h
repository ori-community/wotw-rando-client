#pragma once
#include <Modloader/app/structs/CameraPlugin.h>
#include <Modloader/app/structs/CameraPlugin__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CameraPlugin {
        inline app::CameraPlugin__Class** type_info() {
            static app::CameraPlugin__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CameraPlugin__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CameraPlugin__Class* get_class() {
            return il2cpp::get_class<app::CameraPlugin__Class>(type_info(), "", "CameraPlugin");
        }
        inline app::CameraPlugin* create() {
            return il2cpp::create_object<app::CameraPlugin>(get_class());
        }
    } // namespace CameraPlugin
} // namespace app::classes::types
