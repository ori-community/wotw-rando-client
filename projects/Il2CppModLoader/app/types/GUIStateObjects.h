#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace GUIStateObjects {
        inline app::GUIStateObjects__Class** type_info = (app::GUIStateObjects__Class**)(modloader::win::memory::resolve_rva(0x04705EC0));
        inline app::GUIStateObjects__Class* get_class() {
            return il2cpp::get_class<app::GUIStateObjects__Class>(type_info, "UnityEngine", "GUIStateObjects");
        }
        inline app::GUIStateObjects* create() {
            return il2cpp::create_object<app::GUIStateObjects>(get_class());
        }
    } // namespace GUIStateObjects
} // namespace app::classes::types
