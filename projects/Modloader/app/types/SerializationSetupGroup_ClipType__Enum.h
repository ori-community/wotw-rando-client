#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SerializationSetupGroup_ClipType__Enum {
        namespace {
            inline app::SerializationSetupGroup_ClipType__Enum__Class* type_info_ref = nullptr;
        }
        inline app::SerializationSetupGroup_ClipType__Enum__Class** type_info = &type_info_ref;
        inline app::SerializationSetupGroup_ClipType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::SerializationSetupGroup_ClipType__Enum__Class>(type_info, "", "SerializationSetupGroup", "ClipType");
        }
        inline app::SerializationSetupGroup_ClipType__Enum* create() {
            return il2cpp::create_object<app::SerializationSetupGroup_ClipType__Enum>(get_class());
        }
    } // namespace SerializationSetupGroup_ClipType__Enum
} // namespace app::classes::types
