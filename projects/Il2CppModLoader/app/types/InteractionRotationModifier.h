#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace InteractionRotationModifier {
        extern IL2CPP_MODLOADER_DLLEXPORT app::InteractionRotationModifier__Class** type_info;
        inline app::InteractionRotationModifier__Class* get_class() {
            return il2cpp::get_class<app::InteractionRotationModifier__Class>(type_info, "", "InteractionRotationModifier");
        }
        inline app::InteractionRotationModifier* create() {
            return il2cpp::create_object<app::InteractionRotationModifier>(get_class());
        }
    } // namespace InteractionRotationModifier
} // namespace app::classes::types
