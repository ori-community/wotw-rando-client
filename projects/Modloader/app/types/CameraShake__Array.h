#pragma once
#include <Modloader/app/structs/CameraShake__Array.h>
#include <Modloader/app/structs/CameraShake__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CameraShake__Array {
        inline app::CameraShake__Array__Class** type_info() {
            static app::CameraShake__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CameraShake__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CameraShake__Array__Class* get_class() {
            return il2cpp::get_class<app::CameraShake__Array__Class>(type_info(), "", "CameraShake[]");
        }
        inline app::CameraShake__Array* create() {
            return il2cpp::create_object<app::CameraShake__Array>(get_class());
        }
    } // namespace CameraShake__Array
} // namespace app::classes::types
