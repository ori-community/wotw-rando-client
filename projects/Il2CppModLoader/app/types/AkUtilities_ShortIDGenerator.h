#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AkUtilities_ShortIDGenerator {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AkUtilities_ShortIDGenerator__Class** type_info;
        inline app::AkUtilities_ShortIDGenerator__Class* get_class() {
            return il2cpp::get_nested_class<app::AkUtilities_ShortIDGenerator__Class>(type_info, "", "AkUtilities", "ShortIDGenerator");
        }
        inline app::AkUtilities_ShortIDGenerator* create() {
            return il2cpp::create_object<app::AkUtilities_ShortIDGenerator>(get_class());
        }
    } // namespace AkUtilities_ShortIDGenerator
} // namespace app::classes::types
