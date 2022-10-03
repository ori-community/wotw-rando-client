#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SetBooleanAction_BoolSetModes__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SetBooleanAction_BoolSetModes__Enum__Class** type_info;
        inline app::SetBooleanAction_BoolSetModes__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::SetBooleanAction_BoolSetModes__Enum__Class>(type_info, "Moon.BehaviourSystem", "SetBooleanAction", "BoolSetModes");
        }
        inline app::SetBooleanAction_BoolSetModes__Enum* create() {
            return il2cpp::create_object<app::SetBooleanAction_BoolSetModes__Enum>(get_class());
        }
    } // namespace SetBooleanAction_BoolSetModes__Enum
} // namespace app::classes::types
