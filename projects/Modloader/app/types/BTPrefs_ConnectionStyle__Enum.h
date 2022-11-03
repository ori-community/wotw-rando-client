#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace BTPrefs_ConnectionStyle__Enum {
        namespace {
            inline app::BTPrefs_ConnectionStyle__Enum__Class* type_info_ref = nullptr;
        }
        inline app::BTPrefs_ConnectionStyle__Enum__Class** type_info = &type_info_ref;
        inline app::BTPrefs_ConnectionStyle__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::BTPrefs_ConnectionStyle__Enum__Class>(type_info, "Moon.BehaviourSystem.BTEditor", "BTPrefs", "ConnectionStyle");
        }
        inline app::BTPrefs_ConnectionStyle__Enum* create() {
            return il2cpp::create_object<app::BTPrefs_ConnectionStyle__Enum>(get_class());
        }
    } // namespace BTPrefs_ConnectionStyle__Enum
} // namespace app::classes::types
