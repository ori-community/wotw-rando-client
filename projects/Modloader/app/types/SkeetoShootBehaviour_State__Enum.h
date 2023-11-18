#pragma once
#include <Modloader/app/structs/SkeetoShootBehaviour_State__Enum.h>
#include <Modloader/app/structs/SkeetoShootBehaviour_State__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SkeetoShootBehaviour_State__Enum {
        inline app::SkeetoShootBehaviour_State__Enum__Class** type_info() {
            static app::SkeetoShootBehaviour_State__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SkeetoShootBehaviour_State__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SkeetoShootBehaviour_State__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::SkeetoShootBehaviour_State__Enum__Class>(type_info(), "", "SkeetoShootBehaviour", "State");
        }
        inline app::SkeetoShootBehaviour_State__Enum* create() {
            return il2cpp::create_object<app::SkeetoShootBehaviour_State__Enum>(get_class());
        }
    } // namespace SkeetoShootBehaviour_State__Enum
} // namespace app::classes::types
