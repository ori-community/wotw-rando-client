#pragma once
#include <Modloader/app/structs/WindVent_State__Enum.h>
#include <Modloader/app/structs/WindVent_State__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WindVent_State__Enum {
        inline app::WindVent_State__Enum__Class** type_info() {
            static app::WindVent_State__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::WindVent_State__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::WindVent_State__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::WindVent_State__Enum__Class>(type_info(), "", "WindVent", "State");
        }
        inline app::WindVent_State__Enum* create() {
            return il2cpp::create_object<app::WindVent_State__Enum>(get_class());
        }
    } // namespace WindVent_State__Enum
} // namespace app::classes::types
