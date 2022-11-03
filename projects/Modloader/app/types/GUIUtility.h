#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace GUIUtility {
        inline app::GUIUtility__Class** type_info = (app::GUIUtility__Class**)(modloader::win::memory::resolve_rva(0x0475E6E0));
        inline app::GUIUtility__Class* get_class() {
            return il2cpp::get_class<app::GUIUtility__Class>(type_info, "UnityEngine", "GUIUtility");
        }
        inline app::GUIUtility* create() {
            return il2cpp::create_object<app::GUIUtility>(get_class());
        }
    } // namespace GUIUtility
} // namespace app::classes::types
