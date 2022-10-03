#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ConditionValidator {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ConditionValidator__Class** type_info;
        inline app::ConditionValidator__Class* get_class() {
            return il2cpp::get_class<app::ConditionValidator__Class>(type_info, "", "ConditionValidator");
        }
        inline app::ConditionValidator* create() {
            return il2cpp::create_object<app::ConditionValidator>(get_class());
        }
        inline app::ConditionValidator__Boxed* box(app::ConditionValidator value) {
            return il2cpp::box_value<app::ConditionValidator__Boxed>(get_class(), value);
        }
        inline app::ConditionValidator__Array* create_array(int size) {
            return il2cpp::array_new<app::ConditionValidator__Array>(get_class(), size);
        }
    } // namespace ConditionValidator
} // namespace app::classes::types
