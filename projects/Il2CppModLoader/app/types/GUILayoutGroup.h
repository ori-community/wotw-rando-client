#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace GUILayoutGroup {
        inline app::GUILayoutGroup__Class** type_info = (app::GUILayoutGroup__Class**)(modloader::win::memory::resolve_rva(0x04768D30));
        inline app::GUILayoutGroup__Class* get_class() {
            return il2cpp::get_class<app::GUILayoutGroup__Class>(type_info, "UnityEngine", "GUILayoutGroup");
        }
        inline app::GUILayoutGroup* create() {
            return il2cpp::create_object<app::GUILayoutGroup>(get_class());
        }
    } // namespace GUILayoutGroup
} // namespace app::classes::types
