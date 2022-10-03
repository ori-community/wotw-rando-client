#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MaskedTextProvider_CharType__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MaskedTextProvider_CharType__Enum__Class** type_info;
        inline app::MaskedTextProvider_CharType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::MaskedTextProvider_CharType__Enum__Class>(type_info, "System.ComponentModel", "MaskedTextProvider", "CharType");
        }
        inline app::MaskedTextProvider_CharType__Enum* create() {
            return il2cpp::create_object<app::MaskedTextProvider_CharType__Enum>(get_class());
        }
    } // namespace MaskedTextProvider_CharType__Enum
} // namespace app::classes::types
