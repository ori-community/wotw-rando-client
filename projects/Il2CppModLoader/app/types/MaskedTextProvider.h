#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MaskedTextProvider {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MaskedTextProvider__Class** type_info;
        inline app::MaskedTextProvider__Class* get_class() {
            return il2cpp::get_class<app::MaskedTextProvider__Class>(type_info, "System.ComponentModel", "MaskedTextProvider");
        }
        inline app::MaskedTextProvider* create() {
            return il2cpp::create_object<app::MaskedTextProvider>(get_class());
        }
    } // namespace MaskedTextProvider
} // namespace app::classes::types
