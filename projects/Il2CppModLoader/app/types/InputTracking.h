#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace InputTracking {
        inline app::InputTracking__Class** type_info = (app::InputTracking__Class**)(modloader::win::memory::resolve_rva(0x047088D0));
        inline app::InputTracking__Class* get_class() {
            return il2cpp::get_class<app::InputTracking__Class>(type_info, "UnityEngine.XR", "InputTracking");
        }
        inline app::InputTracking* create() {
            return il2cpp::create_object<app::InputTracking>(get_class());
        }
    } // namespace InputTracking
} // namespace app::classes::types
