#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SpellUIConfirmationOverlay_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SpellUIConfirmationOverlay_c__Class** type_info;
        inline app::SpellUIConfirmationOverlay_c__Class* get_class() {
            return il2cpp::get_nested_class<app::SpellUIConfirmationOverlay_c__Class>(type_info, "", "SpellUIConfirmationOverlay", "<>c");
        }
        inline app::SpellUIConfirmationOverlay_c* create() {
            return il2cpp::create_object<app::SpellUIConfirmationOverlay_c>(get_class());
        }
    } // namespace SpellUIConfirmationOverlay_c
} // namespace app::classes::types
