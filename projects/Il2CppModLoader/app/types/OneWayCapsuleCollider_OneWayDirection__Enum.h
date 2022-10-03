#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace OneWayCapsuleCollider_OneWayDirection__Enum {
        namespace {
            app::OneWayCapsuleCollider_OneWayDirection__Enum__Class* type_info_ref = nullptr;
        }
        app::OneWayCapsuleCollider_OneWayDirection__Enum__Class** type_info = &type_info_ref;
        inline app::OneWayCapsuleCollider_OneWayDirection__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::OneWayCapsuleCollider_OneWayDirection__Enum__Class>(type_info, "", "OneWayCapsuleCollider", "OneWayDirection");
        }
        inline app::OneWayCapsuleCollider_OneWayDirection__Enum* create() {
            return il2cpp::create_object<app::OneWayCapsuleCollider_OneWayDirection__Enum>(get_class());
        }
    } // namespace OneWayCapsuleCollider_OneWayDirection__Enum
} // namespace app::classes::types
