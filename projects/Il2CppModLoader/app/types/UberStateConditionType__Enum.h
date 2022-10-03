#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UberStateConditionType__Enum {
        namespace {
            app::UberStateConditionType__Enum__Class* type_info_ref = nullptr;
        }
        app::UberStateConditionType__Enum__Class** type_info = &type_info_ref;
        inline app::UberStateConditionType__Enum__Class* get_class() {
            return il2cpp::get_class<app::UberStateConditionType__Enum__Class>(type_info, "", "UberStateConditionType");
        }
        inline app::UberStateConditionType__Enum* create() {
            return il2cpp::create_object<app::UberStateConditionType__Enum>(get_class());
        }
        inline app::UberStateConditionType__Enum__Array* create_array(int size) {
            return il2cpp::array_new<app::UberStateConditionType__Enum__Array>(get_class(), size);
        }
    } // namespace UberStateConditionType__Enum
} // namespace app::classes::types
