#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace InteractionRotationModifier_AudioType__Enum {
        namespace {
            inline app::InteractionRotationModifier_AudioType__Enum__Class* type_info_ref = nullptr;
        }
        inline app::InteractionRotationModifier_AudioType__Enum__Class** type_info = &type_info_ref;
        inline app::InteractionRotationModifier_AudioType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::InteractionRotationModifier_AudioType__Enum__Class>(type_info, "", "InteractionRotationModifier", "AudioType");
        }
        inline app::InteractionRotationModifier_AudioType__Enum* create() {
            return il2cpp::create_object<app::InteractionRotationModifier_AudioType__Enum>(get_class());
        }
    } // namespace InteractionRotationModifier_AudioType__Enum
} // namespace app::classes::types
