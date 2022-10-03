#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Regex__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Regex__Array__Class** type_info;
        inline app::Regex__Array__Class* get_class() {
            return il2cpp::get_class<app::Regex__Array__Class>(type_info, "System.Text.RegularExpressions", "Regex[]");
        }
        inline app::Regex__Array* create() {
            return il2cpp::create_object<app::Regex__Array>(get_class());
        }
    } // namespace Regex__Array
} // namespace app::classes::types
