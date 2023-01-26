#pragma once
#include <Modloader/app/structs/BTPrefs_ConnectionStyle__Enum.h>
#include <Modloader/app/structs/BTPrefs_ConnectionStyle__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BTPrefs_ConnectionStyle__Enum {
        inline app::BTPrefs_ConnectionStyle__Enum__Class** type_info() {
            static app::BTPrefs_ConnectionStyle__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::BTPrefs_ConnectionStyle__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::BTPrefs_ConnectionStyle__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::BTPrefs_ConnectionStyle__Enum__Class>(type_info(), "Moon.BehaviourSystem.BTEditor", "BTPrefs", "ConnectionStyle");
        }
        inline app::BTPrefs_ConnectionStyle__Enum* create() {
            return il2cpp::create_object<app::BTPrefs_ConnectionStyle__Enum>(get_class());
        }
    } // namespace BTPrefs_ConnectionStyle__Enum
} // namespace app::classes::types
