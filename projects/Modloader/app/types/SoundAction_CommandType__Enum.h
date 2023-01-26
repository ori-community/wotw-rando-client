#pragma once
#include <Modloader/app/structs/SoundAction_CommandType__Enum.h>
#include <Modloader/app/structs/SoundAction_CommandType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SoundAction_CommandType__Enum {
        inline app::SoundAction_CommandType__Enum__Class** type_info() {
            static app::SoundAction_CommandType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SoundAction_CommandType__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SoundAction_CommandType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::SoundAction_CommandType__Enum__Class>(type_info(), "", "SoundAction", "CommandType");
        }
        inline app::SoundAction_CommandType__Enum* create() {
            return il2cpp::create_object<app::SoundAction_CommandType__Enum>(get_class());
        }
    } // namespace SoundAction_CommandType__Enum
} // namespace app::classes::types
