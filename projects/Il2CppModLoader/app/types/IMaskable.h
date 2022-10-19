#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IMaskable {
        inline app::IMaskable__Class** type_info = (app::IMaskable__Class**)(modloader::win::memory::resolve_rva(0x047730C0));
        inline app::IMaskable__Class* get_class() {
            return il2cpp::get_class<app::IMaskable__Class>(type_info, "UnityEngine.UI", "IMaskable");
        }
    } // namespace IMaskable
} // namespace app::classes::types
