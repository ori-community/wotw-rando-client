#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UberStateConditionHelper {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UberStateConditionHelper__Class** type_info;
        inline app::UberStateConditionHelper__Class* get_class() {
            return il2cpp::get_class<app::UberStateConditionHelper__Class>(type_info, "", "UberStateConditionHelper");
        }
        inline app::UberStateConditionHelper* create() {
            return il2cpp::create_object<app::UberStateConditionHelper>(get_class());
        }
    } // namespace UberStateConditionHelper
} // namespace app::classes::types
