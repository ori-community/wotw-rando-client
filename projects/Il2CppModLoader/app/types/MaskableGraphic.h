#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MaskableGraphic {
        inline app::MaskableGraphic__Class** type_info = (app::MaskableGraphic__Class**)(modloader::win::memory::resolve_rva(0x04799748));
        inline app::MaskableGraphic__Class* get_class() {
            return il2cpp::get_class<app::MaskableGraphic__Class>(type_info, "UnityEngine.UI", "MaskableGraphic");
        }
        inline app::MaskableGraphic* create() {
            return il2cpp::create_object<app::MaskableGraphic>(get_class());
        }
    } // namespace MaskableGraphic
} // namespace app::classes::types
