#pragma once
#include <Modloader/app/structs/IAntiAliasing.h>
#include <Modloader/app/structs/IAntiAliasing__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IAntiAliasing {
        inline app::IAntiAliasing__Class** type_info() {
            static app::IAntiAliasing__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IAntiAliasing__Class**)(modloader::win::memory::resolve_rva(0x04722D48));
            }
            return cache;
        }
        inline app::IAntiAliasing__Class* get_class() {
            return il2cpp::get_class<app::IAntiAliasing__Class>(type_info(), "UnityStandardAssets.CinematicEffects", "IAntiAliasing");
        }
    } // namespace IAntiAliasing
} // namespace app::classes::types
