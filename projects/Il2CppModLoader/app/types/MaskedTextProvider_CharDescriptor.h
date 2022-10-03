#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MaskedTextProvider_CharDescriptor {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MaskedTextProvider_CharDescriptor__Class** type_info;
        inline app::MaskedTextProvider_CharDescriptor__Class* get_class() {
            return il2cpp::get_nested_class<app::MaskedTextProvider_CharDescriptor__Class>(type_info, "System.ComponentModel", "MaskedTextProvider", "CharDescriptor");
        }
        inline app::MaskedTextProvider_CharDescriptor* create() {
            return il2cpp::create_object<app::MaskedTextProvider_CharDescriptor>(get_class());
        }
        inline app::MaskedTextProvider_CharDescriptor__Array* create_array(int size) {
            return il2cpp::array_new<app::MaskedTextProvider_CharDescriptor__Array>(get_class(), size);
        }
    } // namespace MaskedTextProvider_CharDescriptor
} // namespace app::classes::types
