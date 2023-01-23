#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/HitFlash3D_Flash__Array__Class.h>
#include <Modloader/app/structs/HitFlash3D_Flash__Array.h>

namespace app::classes::types {
    namespace HitFlash3D_Flash__Array {
        namespace {
            inline app::HitFlash3D_Flash__Array__Class* type_info_ref = nullptr;
        }
        inline app::HitFlash3D_Flash__Array__Class** type_info = &type_info_ref;
        inline app::HitFlash3D_Flash__Array__Class* get_class() {
            return il2cpp::get_class<app::HitFlash3D_Flash__Array__Class>(type_info, "", "HitFlash3D+Flash[]");
        }
        inline app::HitFlash3D_Flash__Array* create() {
            return il2cpp::create_object<app::HitFlash3D_Flash__Array>(get_class());
        }
    } // namespace HitFlash3D_Flash__Array
} // namespace app::classes::types
