#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SoundZoneTrigger_SoundZoneTriggerType__Enum {
        namespace {
            app::SoundZoneTrigger_SoundZoneTriggerType__Enum__Class* type_info_ref = nullptr;
        }
        app::SoundZoneTrigger_SoundZoneTriggerType__Enum__Class** type_info = &type_info_ref;
        inline app::SoundZoneTrigger_SoundZoneTriggerType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::SoundZoneTrigger_SoundZoneTriggerType__Enum__Class>(type_info, "", "SoundZoneTrigger", "SoundZoneTriggerType");
        }
        inline app::SoundZoneTrigger_SoundZoneTriggerType__Enum* create() {
            return il2cpp::create_object<app::SoundZoneTrigger_SoundZoneTriggerType__Enum>(get_class());
        }
    } // namespace SoundZoneTrigger_SoundZoneTriggerType__Enum
} // namespace app::classes::types
