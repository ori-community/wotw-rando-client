#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ParameterizedStrings_LowLevelStack {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ParameterizedStrings_LowLevelStack__Class** type_info;
        inline app::ParameterizedStrings_LowLevelStack__Class* get_class() {
            return il2cpp::get_nested_class<app::ParameterizedStrings_LowLevelStack__Class>(type_info, "System", "ParameterizedStrings", "LowLevelStack");
        }
        inline app::ParameterizedStrings_LowLevelStack* create() {
            return il2cpp::create_object<app::ParameterizedStrings_LowLevelStack>(get_class());
        }
    } // namespace ParameterizedStrings_LowLevelStack
} // namespace app::classes::types
