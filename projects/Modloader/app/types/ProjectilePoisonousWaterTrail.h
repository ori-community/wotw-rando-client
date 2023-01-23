#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ProjectilePoisonousWaterTrail__Class.h>
#include <Modloader/app/structs/ProjectilePoisonousWaterTrail.h>

namespace app::classes::types {
    namespace ProjectilePoisonousWaterTrail {
        namespace {
            inline app::ProjectilePoisonousWaterTrail__Class* type_info_ref = nullptr;
        }
        inline app::ProjectilePoisonousWaterTrail__Class** type_info = &type_info_ref;
        inline app::ProjectilePoisonousWaterTrail__Class* get_class() {
            return il2cpp::get_class<app::ProjectilePoisonousWaterTrail__Class>(type_info, "", "ProjectilePoisonousWaterTrail");
        }
        inline app::ProjectilePoisonousWaterTrail* create() {
            return il2cpp::create_object<app::ProjectilePoisonousWaterTrail>(get_class());
        }
    } // namespace ProjectilePoisonousWaterTrail
} // namespace app::classes::types
