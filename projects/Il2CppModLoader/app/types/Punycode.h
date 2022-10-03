#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Punycode {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Punycode__Class** type_info;
        inline app::Punycode__Class* get_class() {
            return il2cpp::get_class<app::Punycode__Class>(type_info, "System.Globalization", "Punycode");
        }
        inline app::Punycode* create() {
            return il2cpp::create_object<app::Punycode>(get_class());
        }
    } // namespace Punycode
} // namespace app::classes::types
