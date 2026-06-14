#pragma once
#include <Modloader/app/structs/LogicUtility_ComparisonType__Enum.h>
#include <Modloader/app/structs/LogicUtility_ComparisonType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LogicUtility_ComparisonType__Enum {
        inline app::LogicUtility_ComparisonType__Enum__Class** type_info() {
            static app::LogicUtility_ComparisonType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LogicUtility_ComparisonType__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LogicUtility_ComparisonType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::LogicUtility_ComparisonType__Enum__Class>(type_info(), "", "LogicUtility", "ComparisonType");
        }
        inline app::LogicUtility_ComparisonType__Enum* create() {
            return il2cpp::create_object<app::LogicUtility_ComparisonType__Enum>(get_class());
        }
    } // namespace LogicUtility_ComparisonType__Enum
} // namespace app::classes::types
