#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace GUILayoutOption__Array {
        inline app::GUILayoutOption__Array__Class** type_info = (app::GUILayoutOption__Array__Class**)(modloader::win::memory::resolve_rva(0x04770280));
        inline app::GUILayoutOption__Array__Class* get_class() {
            return il2cpp::get_class<app::GUILayoutOption__Array__Class>(type_info, "UnityEngine", "GUILayoutOption[]");
        }
        inline app::GUILayoutOption__Array* create() {
            return il2cpp::create_object<app::GUILayoutOption__Array>(get_class());
        }
    } // namespace GUILayoutOption__Array
} // namespace app::classes::types
