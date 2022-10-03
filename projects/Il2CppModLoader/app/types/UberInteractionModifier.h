#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UberInteractionModifier {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UberInteractionModifier__Class** type_info;
        inline app::UberInteractionModifier__Class* get_class() {
            return il2cpp::get_class<app::UberInteractionModifier__Class>(type_info, "", "UberInteractionModifier");
        }
        inline app::UberInteractionModifier* create() {
            return il2cpp::create_object<app::UberInteractionModifier>(get_class());
        }
    } // namespace UberInteractionModifier
} // namespace app::classes::types
