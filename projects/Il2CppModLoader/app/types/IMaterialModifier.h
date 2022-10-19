#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IMaterialModifier {
        inline app::IMaterialModifier__Class** type_info = (app::IMaterialModifier__Class**)(modloader::win::memory::resolve_rva(0x047981E0));
        inline app::IMaterialModifier__Class* get_class() {
            return il2cpp::get_class<app::IMaterialModifier__Class>(type_info, "UnityEngine.UI", "IMaterialModifier");
        }
    } // namespace IMaterialModifier
} // namespace app::classes::types
