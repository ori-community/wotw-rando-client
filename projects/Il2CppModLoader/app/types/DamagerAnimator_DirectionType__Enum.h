#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DamagerAnimator_DirectionType__Enum {
        namespace {
            app::DamagerAnimator_DirectionType__Enum__Class* type_info_ref = nullptr;
        }
        app::DamagerAnimator_DirectionType__Enum__Class** type_info = &type_info_ref;
        inline app::DamagerAnimator_DirectionType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::DamagerAnimator_DirectionType__Enum__Class>(type_info, "", "DamagerAnimator", "DirectionType");
        }
        inline app::DamagerAnimator_DirectionType__Enum* create() {
            return il2cpp::create_object<app::DamagerAnimator_DirectionType__Enum>(get_class());
        }
    } // namespace DamagerAnimator_DirectionType__Enum
} // namespace app::classes::types
