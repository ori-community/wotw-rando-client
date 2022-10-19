#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace WaitForFixedUpdate {
        inline app::WaitForFixedUpdate__Class** type_info = (app::WaitForFixedUpdate__Class**)(modloader::win::memory::resolve_rva(0x0470A9F8));
        inline app::WaitForFixedUpdate__Class* get_class() {
            return il2cpp::get_class<app::WaitForFixedUpdate__Class>(type_info, "UnityEngine", "WaitForFixedUpdate");
        }
        inline app::WaitForFixedUpdate* create() {
            return il2cpp::create_object<app::WaitForFixedUpdate>(get_class());
        }
    } // namespace WaitForFixedUpdate
} // namespace app::classes::types
