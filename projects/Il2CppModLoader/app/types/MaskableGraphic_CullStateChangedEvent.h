#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MaskableGraphic_CullStateChangedEvent {
        inline app::MaskableGraphic_CullStateChangedEvent__Class** type_info = (app::MaskableGraphic_CullStateChangedEvent__Class**)(modloader::win::memory::resolve_rva(0x0473D410));
        inline app::MaskableGraphic_CullStateChangedEvent__Class* get_class() {
            return il2cpp::get_nested_class<app::MaskableGraphic_CullStateChangedEvent__Class>(type_info, "UnityEngine.UI", "MaskableGraphic", "CullStateChangedEvent");
        }
        inline app::MaskableGraphic_CullStateChangedEvent* create() {
            return il2cpp::create_object<app::MaskableGraphic_CullStateChangedEvent>(get_class());
        }
    } // namespace MaskableGraphic_CullStateChangedEvent
} // namespace app::classes::types
