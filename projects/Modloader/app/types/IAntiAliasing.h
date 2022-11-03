#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace IAntiAliasing {
        inline app::IAntiAliasing__Class** type_info = (app::IAntiAliasing__Class**)(modloader::win::memory::resolve_rva(0x04722D48));
        inline app::IAntiAliasing__Class* get_class() {
            return il2cpp::get_class<app::IAntiAliasing__Class>(type_info, "UnityStandardAssets.CinematicEffects", "IAntiAliasing");
        }
    } // namespace IAntiAliasing
} // namespace app::classes::types
