#pragma once
#include <Modloader/app/structs/LegacyActivateAnimator_ActivationMode__Enum.h>
#include <Modloader/app/structs/LegacyActivateAnimator_ActivationMode__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LegacyActivateAnimator_ActivationMode__Enum {
        inline app::LegacyActivateAnimator_ActivationMode__Enum__Class** type_info() {
            static app::LegacyActivateAnimator_ActivationMode__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LegacyActivateAnimator_ActivationMode__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LegacyActivateAnimator_ActivationMode__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::LegacyActivateAnimator_ActivationMode__Enum__Class>(type_info(), "", "LegacyActivateAnimator", "ActivationMode");
        }
        inline app::LegacyActivateAnimator_ActivationMode__Enum* create() {
            return il2cpp::create_object<app::LegacyActivateAnimator_ActivationMode__Enum>(get_class());
        }
    } // namespace LegacyActivateAnimator_ActivationMode__Enum
} // namespace app::classes::types
