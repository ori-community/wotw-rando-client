#pragma once
#include <Modloader/app/structs/SoundZoneTrigger_SoundZoneTriggerMode__Enum.h>
#include <Modloader/app/structs/SoundZoneTrigger_SoundZoneTriggerMode__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SoundZoneTrigger_SoundZoneTriggerMode__Enum {
        inline app::SoundZoneTrigger_SoundZoneTriggerMode__Enum__Class** type_info() {
            static app::SoundZoneTrigger_SoundZoneTriggerMode__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SoundZoneTrigger_SoundZoneTriggerMode__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SoundZoneTrigger_SoundZoneTriggerMode__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::SoundZoneTrigger_SoundZoneTriggerMode__Enum__Class>(type_info(), "", "SoundZoneTrigger", "SoundZoneTriggerMode");
        }
        inline app::SoundZoneTrigger_SoundZoneTriggerMode__Enum* create() {
            return il2cpp::create_object<app::SoundZoneTrigger_SoundZoneTriggerMode__Enum>(get_class());
        }
    } // namespace SoundZoneTrigger_SoundZoneTriggerMode__Enum
} // namespace app::classes::types
