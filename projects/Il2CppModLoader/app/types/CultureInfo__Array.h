#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CultureInfo__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CultureInfo__Array__Class** type_info;
        inline app::CultureInfo__Array__Class* get_class() {
            return il2cpp::get_class<app::CultureInfo__Array__Class>(type_info, "System.Globalization", "CultureInfo[]");
        }
        inline app::CultureInfo__Array* create() {
            return il2cpp::create_object<app::CultureInfo__Array>(get_class());
        }
    } // namespace CultureInfo__Array
} // namespace app::classes::types
