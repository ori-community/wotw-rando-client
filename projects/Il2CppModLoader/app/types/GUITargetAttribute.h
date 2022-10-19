#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace GUITargetAttribute {
        inline app::GUITargetAttribute__Class** type_info = (app::GUITargetAttribute__Class**)(modloader::win::memory::resolve_rva(0x0474BB50));
        inline app::GUITargetAttribute__Class* get_class() {
            return il2cpp::get_class<app::GUITargetAttribute__Class>(type_info, "UnityEngine", "GUITargetAttribute");
        }
        inline app::GUITargetAttribute* create() {
            return il2cpp::create_object<app::GUITargetAttribute>(get_class());
        }
    } // namespace GUITargetAttribute
} // namespace app::classes::types
