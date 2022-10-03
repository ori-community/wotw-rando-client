#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ConditionUberState {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ConditionUberState__Class** type_info;
        inline app::ConditionUberState__Class* get_class() {
            return il2cpp::get_class<app::ConditionUberState__Class>(type_info, "Moon", "ConditionUberState");
        }
        inline app::ConditionUberState* create() {
            return il2cpp::create_object<app::ConditionUberState>(get_class());
        }
        inline app::ConditionUberState__Array* create_array(int size) {
            return il2cpp::array_new<app::ConditionUberState__Array>(get_class(), size);
        }
    } // namespace ConditionUberState
} // namespace app::classes::types
