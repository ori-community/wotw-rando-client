#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IdnMapping {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IdnMapping__Class** type_info;
        inline app::IdnMapping__Class* get_class() {
            return il2cpp::get_class<app::IdnMapping__Class>(type_info, "System.Globalization", "IdnMapping");
        }
        inline app::IdnMapping* create() {
            return il2cpp::create_object<app::IdnMapping>(get_class());
        }
    } // namespace IdnMapping
} // namespace app::classes::types
