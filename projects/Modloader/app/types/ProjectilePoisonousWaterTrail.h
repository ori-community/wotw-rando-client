#pragma once
#include <Modloader/app/structs/ProjectilePoisonousWaterTrail.h>
#include <Modloader/app/structs/ProjectilePoisonousWaterTrail__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ProjectilePoisonousWaterTrail {
        inline app::ProjectilePoisonousWaterTrail__Class** type_info() {
            static app::ProjectilePoisonousWaterTrail__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ProjectilePoisonousWaterTrail__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ProjectilePoisonousWaterTrail__Class* get_class() {
            return il2cpp::get_class<app::ProjectilePoisonousWaterTrail__Class>(type_info(), "", "ProjectilePoisonousWaterTrail");
        }
        inline app::ProjectilePoisonousWaterTrail* create() {
            return il2cpp::create_object<app::ProjectilePoisonousWaterTrail>(get_class());
        }
    } // namespace ProjectilePoisonousWaterTrail
} // namespace app::classes::types
