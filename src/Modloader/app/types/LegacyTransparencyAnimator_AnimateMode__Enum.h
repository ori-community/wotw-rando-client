#pragma once
#include <Modloader/app/structs/LegacyTransparencyAnimator_AnimateMode__Enum.h>
#include <Modloader/app/structs/LegacyTransparencyAnimator_AnimateMode__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LegacyTransparencyAnimator_AnimateMode__Enum {
        inline app::LegacyTransparencyAnimator_AnimateMode__Enum__Class** type_info() {
            static app::LegacyTransparencyAnimator_AnimateMode__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LegacyTransparencyAnimator_AnimateMode__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LegacyTransparencyAnimator_AnimateMode__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::LegacyTransparencyAnimator_AnimateMode__Enum__Class>(type_info(), "", "LegacyTransparencyAnimator", "AnimateMode");
        }
        inline app::LegacyTransparencyAnimator_AnimateMode__Enum* create() {
            return il2cpp::create_object<app::LegacyTransparencyAnimator_AnimateMode__Enum>(get_class());
        }
    } // namespace LegacyTransparencyAnimator_AnimateMode__Enum
} // namespace app::classes::types
