#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ScrollRect_MovementType__Enum {
        namespace {
            app::ScrollRect_MovementType__Enum__Class* type_info_ref = nullptr;
        }
        app::ScrollRect_MovementType__Enum__Class** type_info = &type_info_ref;
        inline app::ScrollRect_MovementType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::ScrollRect_MovementType__Enum__Class>(type_info, "UnityEngine.UI", "ScrollRect", "MovementType");
        }
        inline app::ScrollRect_MovementType__Enum* create() {
            return il2cpp::create_object<app::ScrollRect_MovementType__Enum>(get_class());
        }
    } // namespace ScrollRect_MovementType__Enum
} // namespace app::classes::types
