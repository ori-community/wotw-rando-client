#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace GUILayoutUtility {
        inline app::GUILayoutUtility__Class** type_info = (app::GUILayoutUtility__Class**)(modloader::win::memory::resolve_rva(0x04751080));
        inline app::GUILayoutUtility__Class* get_class() {
            return il2cpp::get_class<app::GUILayoutUtility__Class>(type_info, "UnityEngine", "GUILayoutUtility");
        }
        inline app::GUILayoutUtility* create() {
            return il2cpp::create_object<app::GUILayoutUtility>(get_class());
        }
    } // namespace GUILayoutUtility
} // namespace app::classes::types
