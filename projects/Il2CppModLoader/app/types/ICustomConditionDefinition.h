#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ICustomConditionDefinition {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ICustomConditionDefinition__Class** type_info;
        inline app::ICustomConditionDefinition__Class* get_class() {
            return il2cpp::get_class<app::ICustomConditionDefinition__Class>(type_info, "", "ICustomConditionDefinition");
        }
        inline app::ICustomConditionDefinition* create() {
            return il2cpp::create_object<app::ICustomConditionDefinition>(get_class());
        }
    } // namespace ICustomConditionDefinition
} // namespace app::classes::types
