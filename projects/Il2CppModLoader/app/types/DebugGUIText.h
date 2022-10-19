#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace DebugGUIText {
        inline app::DebugGUIText__Class** type_info = (app::DebugGUIText__Class**)(modloader::win::memory::resolve_rva(0x0472B9B0));
        inline app::DebugGUIText__Class* get_class() {
            return il2cpp::get_class<app::DebugGUIText__Class>(type_info, "", "DebugGUIText");
        }
        inline app::DebugGUIText* create() {
            return il2cpp::create_object<app::DebugGUIText>(get_class());
        }
    } // namespace DebugGUIText
} // namespace app::classes::types
