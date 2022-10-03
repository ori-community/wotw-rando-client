#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MaskableGraphic {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MaskableGraphic__Class** type_info;
        inline app::MaskableGraphic__Class* get_class() {
            return il2cpp::get_class<app::MaskableGraphic__Class>(type_info, "UnityEngine.UI", "MaskableGraphic");
        }
        inline app::MaskableGraphic* create() {
            return il2cpp::create_object<app::MaskableGraphic>(get_class());
        }
    } // namespace MaskableGraphic
} // namespace app::classes::types
