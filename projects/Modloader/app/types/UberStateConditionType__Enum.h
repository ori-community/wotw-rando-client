#pragma once
#include <Modloader/app/structs/UberStateConditionType__Enum.h>
#include <Modloader/app/structs/UberStateConditionType__Enum__Array.h>
#include <Modloader/app/structs/UberStateConditionType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberStateConditionType__Enum {
        inline app::UberStateConditionType__Enum__Class** type_info() {
            static app::UberStateConditionType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UberStateConditionType__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UberStateConditionType__Enum__Class* get_class() {
            return il2cpp::get_class<app::UberStateConditionType__Enum__Class>(type_info(), "", "UberStateConditionType");
        }
        inline app::UberStateConditionType__Enum* create() {
            return il2cpp::create_object<app::UberStateConditionType__Enum>(get_class());
        }
        inline app::UberStateConditionType__Enum__Array* create_array(int size) {
            return il2cpp::array_new<app::UberStateConditionType__Enum__Array>(get_class(), size);
        }
        inline app::UberStateConditionType__Enum__Array* create_array(const std::vector<app::UberStateConditionType__Enum*>& items) {
            return il2cpp::array_new<app::UberStateConditionType__Enum__Array>(get_class(), items);
        }
    } // namespace UberStateConditionType__Enum
} // namespace app::classes::types
