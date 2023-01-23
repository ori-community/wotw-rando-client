#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SoundZoneTrigger_SoundZoneTriggerMode__Enum__Class.h>
#include <Modloader/app/structs/SoundZoneTrigger_SoundZoneTriggerMode__Enum.h>

namespace app::classes::types {
    namespace SoundZoneTrigger_SoundZoneTriggerMode__Enum {
        namespace {
            inline app::SoundZoneTrigger_SoundZoneTriggerMode__Enum__Class* type_info_ref = nullptr;
        }
        inline app::SoundZoneTrigger_SoundZoneTriggerMode__Enum__Class** type_info = &type_info_ref;
        inline app::SoundZoneTrigger_SoundZoneTriggerMode__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::SoundZoneTrigger_SoundZoneTriggerMode__Enum__Class>(type_info, "", "SoundZoneTrigger", "SoundZoneTriggerMode");
        }
        inline app::SoundZoneTrigger_SoundZoneTriggerMode__Enum* create() {
            return il2cpp::create_object<app::SoundZoneTrigger_SoundZoneTriggerMode__Enum>(get_class());
        }
    } // namespace SoundZoneTrigger_SoundZoneTriggerMode__Enum
} // namespace app::classes::types
