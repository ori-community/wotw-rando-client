#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GraphicRaycaster {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GraphicRaycaster__Class** type_info;
        inline app::GraphicRaycaster__Class* get_class() {
            return il2cpp::get_class<app::GraphicRaycaster__Class>(type_info, "UnityEngine.UI", "GraphicRaycaster");
        }
        inline app::GraphicRaycaster* create() {
            return il2cpp::create_object<app::GraphicRaycaster>(get_class());
        }
    } // namespace GraphicRaycaster
} // namespace app::classes::types
