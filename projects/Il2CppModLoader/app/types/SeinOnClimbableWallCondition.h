#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SeinOnClimbableWallCondition {
        namespace {
            inline app::SeinOnClimbableWallCondition__Class* type_info_ref = nullptr;
        }
        inline app::SeinOnClimbableWallCondition__Class** type_info = &type_info_ref;
        inline app::SeinOnClimbableWallCondition__Class* get_class() {
            return il2cpp::get_class<app::SeinOnClimbableWallCondition__Class>(type_info, "", "SeinOnClimbableWallCondition");
        }
        inline app::SeinOnClimbableWallCondition* create() {
            return il2cpp::create_object<app::SeinOnClimbableWallCondition>(get_class());
        }
    } // namespace SeinOnClimbableWallCondition
} // namespace app::classes::types
