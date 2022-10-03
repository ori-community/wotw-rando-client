#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ProjectilePoisonousWaterTrail {
        namespace {
            app::ProjectilePoisonousWaterTrail__Class* type_info_ref = nullptr;
        }
        app::ProjectilePoisonousWaterTrail__Class** type_info = &type_info_ref;
        inline app::ProjectilePoisonousWaterTrail__Class* get_class() {
            return il2cpp::get_class<app::ProjectilePoisonousWaterTrail__Class>(type_info, "", "ProjectilePoisonousWaterTrail");
        }
        inline app::ProjectilePoisonousWaterTrail* create() {
            return il2cpp::create_object<app::ProjectilePoisonousWaterTrail>(get_class());
        }
    } // namespace ProjectilePoisonousWaterTrail
} // namespace app::classes::types
