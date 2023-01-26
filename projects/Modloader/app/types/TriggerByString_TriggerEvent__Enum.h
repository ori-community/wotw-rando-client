#pragma once
#include <Modloader/app/structs/TriggerByString_TriggerEvent__Enum.h>
#include <Modloader/app/structs/TriggerByString_TriggerEvent__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TriggerByString_TriggerEvent__Enum {
        inline app::TriggerByString_TriggerEvent__Enum__Class** type_info() {
            static app::TriggerByString_TriggerEvent__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TriggerByString_TriggerEvent__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TriggerByString_TriggerEvent__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::TriggerByString_TriggerEvent__Enum__Class>(type_info(), "", "TriggerByString", "TriggerEvent");
        }
        inline app::TriggerByString_TriggerEvent__Enum* create() {
            return il2cpp::create_object<app::TriggerByString_TriggerEvent__Enum>(get_class());
        }
    } // namespace TriggerByString_TriggerEvent__Enum
} // namespace app::classes::types
