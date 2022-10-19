#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace UberColorAnimator_ColorName__Enum {
        namespace {
            inline app::UberColorAnimator_ColorName__Enum__Class* type_info_ref = nullptr;
        }
        inline app::UberColorAnimator_ColorName__Enum__Class** type_info = &type_info_ref;
        inline app::UberColorAnimator_ColorName__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::UberColorAnimator_ColorName__Enum__Class>(type_info, "", "UberColorAnimator", "ColorName");
        }
        inline app::UberColorAnimator_ColorName__Enum* create() {
            return il2cpp::create_object<app::UberColorAnimator_ColorName__Enum>(get_class());
        }
    } // namespace UberColorAnimator_ColorName__Enum
} // namespace app::classes::types
