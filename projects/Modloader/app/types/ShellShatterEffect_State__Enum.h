#pragma once
#include <Modloader/app/structs/ShellShatterEffect_State__Enum.h>
#include <Modloader/app/structs/ShellShatterEffect_State__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShellShatterEffect_State__Enum {
        inline app::ShellShatterEffect_State__Enum__Class** type_info() {
            static app::ShellShatterEffect_State__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ShellShatterEffect_State__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ShellShatterEffect_State__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::ShellShatterEffect_State__Enum__Class>(type_info(), "", "ShellShatterEffect", "State");
        }
        inline app::ShellShatterEffect_State__Enum* create() {
            return il2cpp::create_object<app::ShellShatterEffect_State__Enum>(get_class());
        }
    } // namespace ShellShatterEffect_State__Enum
} // namespace app::classes::types
