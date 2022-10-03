#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MaskableGraphic_CullStateChangedEvent {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MaskableGraphic_CullStateChangedEvent__Class** type_info;
        inline app::MaskableGraphic_CullStateChangedEvent__Class* get_class() {
            return il2cpp::get_nested_class<app::MaskableGraphic_CullStateChangedEvent__Class>(type_info, "UnityEngine.UI", "MaskableGraphic", "CullStateChangedEvent");
        }
        inline app::MaskableGraphic_CullStateChangedEvent* create() {
            return il2cpp::create_object<app::MaskableGraphic_CullStateChangedEvent>(get_class());
        }
    } // namespace MaskableGraphic_CullStateChangedEvent
} // namespace app::classes::types
