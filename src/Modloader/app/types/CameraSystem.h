#pragma once
#include <Modloader/app/structs/CameraSystem.h>
#include <Modloader/app/structs/CameraSystem__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CameraSystem {
        inline app::CameraSystem__Class** type_info() {
            static app::CameraSystem__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CameraSystem__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CameraSystem__Class* get_class() {
            return il2cpp::get_class<app::CameraSystem__Class>(type_info(), "", "CameraSystem");
        }
        inline app::CameraSystem* create() {
            return il2cpp::create_object<app::CameraSystem>(get_class());
        }
    } // namespace CameraSystem
} // namespace app::classes::types
