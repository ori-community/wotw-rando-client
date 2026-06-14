#pragma once
#include <Modloader/app/structs/OneWayCapsuleCollider_OneWayDirection__Enum.h>
#include <Modloader/app/structs/OneWayCapsuleCollider_OneWayDirection__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace OneWayCapsuleCollider_OneWayDirection__Enum {
        inline app::OneWayCapsuleCollider_OneWayDirection__Enum__Class** type_info() {
            static app::OneWayCapsuleCollider_OneWayDirection__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::OneWayCapsuleCollider_OneWayDirection__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::OneWayCapsuleCollider_OneWayDirection__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::OneWayCapsuleCollider_OneWayDirection__Enum__Class>(type_info(), "", "OneWayCapsuleCollider", "OneWayDirection");
        }
        inline app::OneWayCapsuleCollider_OneWayDirection__Enum* create() {
            return il2cpp::create_object<app::OneWayCapsuleCollider_OneWayDirection__Enum>(get_class());
        }
    } // namespace OneWayCapsuleCollider_OneWayDirection__Enum
} // namespace app::classes::types
