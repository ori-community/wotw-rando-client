#pragma once
#include <Modloader/app/structs/InteractionRotationModifier_AudioType__Enum.h>
#include <Modloader/app/structs/InteractionRotationModifier_AudioType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace InteractionRotationModifier_AudioType__Enum {
        inline app::InteractionRotationModifier_AudioType__Enum__Class** type_info() {
            static app::InteractionRotationModifier_AudioType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::InteractionRotationModifier_AudioType__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::InteractionRotationModifier_AudioType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::InteractionRotationModifier_AudioType__Enum__Class>(type_info(), "", "InteractionRotationModifier", "AudioType");
        }
        inline app::InteractionRotationModifier_AudioType__Enum* create() {
            return il2cpp::create_object<app::InteractionRotationModifier_AudioType__Enum>(get_class());
        }
    } // namespace InteractionRotationModifier_AudioType__Enum
} // namespace app::classes::types
