#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace TransparencyAnimator_AnimateMode__Enum {
        namespace {
            inline app::TransparencyAnimator_AnimateMode__Enum__Class* type_info_ref = nullptr;
        }
        inline app::TransparencyAnimator_AnimateMode__Enum__Class** type_info = &type_info_ref;
        inline app::TransparencyAnimator_AnimateMode__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::TransparencyAnimator_AnimateMode__Enum__Class>(type_info, "Moon.Timeline", "TransparencyAnimator", "AnimateMode");
        }
        inline app::TransparencyAnimator_AnimateMode__Enum* create() {
            return il2cpp::create_object<app::TransparencyAnimator_AnimateMode__Enum>(get_class());
        }
    } // namespace TransparencyAnimator_AnimateMode__Enum
} // namespace app::classes::types
