#pragma once
#include <Modloader/app/structs/SeinOnClimbableWallCondition.h>
#include <Modloader/app/structs/SeinOnClimbableWallCondition__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinOnClimbableWallCondition {
        inline app::SeinOnClimbableWallCondition__Class** type_info() {
            static app::SeinOnClimbableWallCondition__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SeinOnClimbableWallCondition__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SeinOnClimbableWallCondition__Class* get_class() {
            return il2cpp::get_class<app::SeinOnClimbableWallCondition__Class>(type_info(), "", "SeinOnClimbableWallCondition");
        }
        inline app::SeinOnClimbableWallCondition* create() {
            return il2cpp::create_object<app::SeinOnClimbableWallCondition>(get_class());
        }
    } // namespace SeinOnClimbableWallCondition
} // namespace app::classes::types
