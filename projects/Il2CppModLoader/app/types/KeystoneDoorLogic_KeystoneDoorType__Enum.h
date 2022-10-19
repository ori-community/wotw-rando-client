#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace KeystoneDoorLogic_KeystoneDoorType__Enum {
        namespace {
            inline app::KeystoneDoorLogic_KeystoneDoorType__Enum__Class* type_info_ref = nullptr;
        }
        inline app::KeystoneDoorLogic_KeystoneDoorType__Enum__Class** type_info = &type_info_ref;
        inline app::KeystoneDoorLogic_KeystoneDoorType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::KeystoneDoorLogic_KeystoneDoorType__Enum__Class>(type_info, "", "KeystoneDoorLogic", "KeystoneDoorType");
        }
        inline app::KeystoneDoorLogic_KeystoneDoorType__Enum* create() {
            return il2cpp::create_object<app::KeystoneDoorLogic_KeystoneDoorType__Enum>(get_class());
        }
    } // namespace KeystoneDoorLogic_KeystoneDoorType__Enum
} // namespace app::classes::types
