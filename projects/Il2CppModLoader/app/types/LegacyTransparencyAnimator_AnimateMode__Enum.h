#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LegacyTransparencyAnimator_AnimateMode__Enum {
        namespace {
            app::LegacyTransparencyAnimator_AnimateMode__Enum__Class* type_info_ref = nullptr;
        }
        app::LegacyTransparencyAnimator_AnimateMode__Enum__Class** type_info = &type_info_ref;
        inline app::LegacyTransparencyAnimator_AnimateMode__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::LegacyTransparencyAnimator_AnimateMode__Enum__Class>(type_info, "", "LegacyTransparencyAnimator", "AnimateMode");
        }
        inline app::LegacyTransparencyAnimator_AnimateMode__Enum* create() {
            return il2cpp::create_object<app::LegacyTransparencyAnimator_AnimateMode__Enum>(get_class());
        }
    } // namespace LegacyTransparencyAnimator_AnimateMode__Enum
} // namespace app::classes::types
