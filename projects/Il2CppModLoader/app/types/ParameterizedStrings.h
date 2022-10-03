#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ParameterizedStrings {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ParameterizedStrings__Class** type_info;
        inline app::ParameterizedStrings__Class* get_class() {
            return il2cpp::get_class<app::ParameterizedStrings__Class>(type_info, "System", "ParameterizedStrings");
        }
        inline app::ParameterizedStrings* create() {
            return il2cpp::create_object<app::ParameterizedStrings>(get_class());
        }
    } // namespace ParameterizedStrings
} // namespace app::classes::types
