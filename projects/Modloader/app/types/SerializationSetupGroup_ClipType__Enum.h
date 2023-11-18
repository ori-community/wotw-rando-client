#pragma once
#include <Modloader/app/structs/SerializationSetupGroup_ClipType__Enum.h>
#include <Modloader/app/structs/SerializationSetupGroup_ClipType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SerializationSetupGroup_ClipType__Enum {
        inline app::SerializationSetupGroup_ClipType__Enum__Class** type_info() {
            static app::SerializationSetupGroup_ClipType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SerializationSetupGroup_ClipType__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SerializationSetupGroup_ClipType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::SerializationSetupGroup_ClipType__Enum__Class>(type_info(), "", "SerializationSetupGroup", "ClipType");
        }
        inline app::SerializationSetupGroup_ClipType__Enum* create() {
            return il2cpp::create_object<app::SerializationSetupGroup_ClipType__Enum>(get_class());
        }
    } // namespace SerializationSetupGroup_ClipType__Enum
} // namespace app::classes::types
