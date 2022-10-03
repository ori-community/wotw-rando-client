#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace InteractionPunchModifier {
        extern IL2CPP_MODLOADER_DLLEXPORT app::InteractionPunchModifier__Class** type_info;
        inline app::InteractionPunchModifier__Class* get_class() {
            return il2cpp::get_class<app::InteractionPunchModifier__Class>(type_info, "", "InteractionPunchModifier");
        }
        inline app::InteractionPunchModifier* create() {
            return il2cpp::create_object<app::InteractionPunchModifier>(get_class());
        }
    } // namespace InteractionPunchModifier
} // namespace app::classes::types
