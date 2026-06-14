#pragma once
#include <Modloader/app/structs/HitFlash3D_Flash__Array.h>
#include <Modloader/app/structs/HitFlash3D_Flash__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HitFlash3D_Flash__Array {
        inline app::HitFlash3D_Flash__Array__Class** type_info() {
            static app::HitFlash3D_Flash__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::HitFlash3D_Flash__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::HitFlash3D_Flash__Array__Class* get_class() {
            return il2cpp::get_class<app::HitFlash3D_Flash__Array__Class>(type_info(), "", "HitFlash3D+Flash[]");
        }
        inline app::HitFlash3D_Flash__Array* create() {
            return il2cpp::create_object<app::HitFlash3D_Flash__Array>(get_class());
        }
    } // namespace HitFlash3D_Flash__Array
} // namespace app::classes::types
