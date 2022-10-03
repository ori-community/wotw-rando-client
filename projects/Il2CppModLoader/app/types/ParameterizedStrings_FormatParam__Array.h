#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ParameterizedStrings_FormatParam__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ParameterizedStrings_FormatParam__Array__Class** type_info;
        inline app::ParameterizedStrings_FormatParam__Array__Class* get_class() {
            return il2cpp::get_class<app::ParameterizedStrings_FormatParam__Array__Class>(type_info, "System", "ParameterizedStrings+FormatParam[]");
        }
        inline app::ParameterizedStrings_FormatParam__Array* create() {
            return il2cpp::create_object<app::ParameterizedStrings_FormatParam__Array>(get_class());
        }
    } // namespace ParameterizedStrings_FormatParam__Array
} // namespace app::classes::types
