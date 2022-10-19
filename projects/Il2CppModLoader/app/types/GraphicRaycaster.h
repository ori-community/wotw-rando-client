#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace GraphicRaycaster {
        inline app::GraphicRaycaster__Class** type_info = (app::GraphicRaycaster__Class**)(modloader::win::memory::resolve_rva(0x0478C320));
        inline app::GraphicRaycaster__Class* get_class() {
            return il2cpp::get_class<app::GraphicRaycaster__Class>(type_info, "UnityEngine.UI", "GraphicRaycaster");
        }
        inline app::GraphicRaycaster* create() {
            return il2cpp::create_object<app::GraphicRaycaster>(get_class());
        }
    } // namespace GraphicRaycaster
} // namespace app::classes::types
