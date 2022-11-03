#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace LegacyTransparencyAnimator_AnimateMode__Enum {
        namespace {
            inline app::LegacyTransparencyAnimator_AnimateMode__Enum__Class* type_info_ref = nullptr;
        }
        inline app::LegacyTransparencyAnimator_AnimateMode__Enum__Class** type_info = &type_info_ref;
        inline app::LegacyTransparencyAnimator_AnimateMode__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::LegacyTransparencyAnimator_AnimateMode__Enum__Class>(type_info, "", "LegacyTransparencyAnimator", "AnimateMode");
        }
        inline app::LegacyTransparencyAnimator_AnimateMode__Enum* create() {
            return il2cpp::create_object<app::LegacyTransparencyAnimator_AnimateMode__Enum>(get_class());
        }
    } // namespace LegacyTransparencyAnimator_AnimateMode__Enum
} // namespace app::classes::types
