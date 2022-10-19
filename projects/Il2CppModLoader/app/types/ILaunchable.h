#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ILaunchable {
        inline app::ILaunchable__Class** type_info = (app::ILaunchable__Class**)(modloader::win::memory::resolve_rva(0x04781B98));
        inline app::ILaunchable__Class* get_class() {
            return il2cpp::get_class<app::ILaunchable__Class>(type_info, "Moon", "ILaunchable");
        }
    } // namespace ILaunchable
} // namespace app::classes::types
