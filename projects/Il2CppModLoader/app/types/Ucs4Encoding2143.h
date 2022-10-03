#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Ucs4Encoding2143 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Ucs4Encoding2143__Class** type_info;
        inline app::Ucs4Encoding2143__Class* get_class() {
            return il2cpp::get_class<app::Ucs4Encoding2143__Class>(type_info, "System.Xml", "Ucs4Encoding2143");
        }
        inline app::Ucs4Encoding2143* create() {
            return il2cpp::create_object<app::Ucs4Encoding2143>(get_class());
        }
    } // namespace Ucs4Encoding2143
} // namespace app::classes::types
