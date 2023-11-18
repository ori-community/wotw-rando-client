#pragma once
#include <Modloader/app/structs/StatSetting_StatFormat__Enum.h>
#include <Modloader/app/structs/StatSetting_StatFormat__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace StatSetting_StatFormat__Enum {
        inline app::StatSetting_StatFormat__Enum__Class** type_info() {
            static app::StatSetting_StatFormat__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::StatSetting_StatFormat__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::StatSetting_StatFormat__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::StatSetting_StatFormat__Enum__Class>(type_info(), "", "StatSetting", "StatFormat");
        }
        inline app::StatSetting_StatFormat__Enum* create() {
            return il2cpp::create_object<app::StatSetting_StatFormat__Enum>(get_class());
        }
    } // namespace StatSetting_StatFormat__Enum
} // namespace app::classes::types
