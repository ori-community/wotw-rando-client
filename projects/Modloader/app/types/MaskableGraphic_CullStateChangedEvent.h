#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/MaskableGraphic_CullStateChangedEvent__Class.h>
#include <Modloader/app/structs/MaskableGraphic_CullStateChangedEvent.h>

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
