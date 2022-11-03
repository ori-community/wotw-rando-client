#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace GUIStyleState {
        inline app::GUIStyleState__Class** type_info = (app::GUIStyleState__Class**)(modloader::win::memory::resolve_rva(0x0478D5E0));
        inline app::GUIStyleState__Class* get_class() {
            return il2cpp::get_class<app::GUIStyleState__Class>(type_info, "UnityEngine", "GUIStyleState");
        }
        inline app::GUIStyleState* create() {
            return il2cpp::create_object<app::GUIStyleState>(get_class());
        }
    } // namespace GUIStyleState
} // namespace app::classes::types
