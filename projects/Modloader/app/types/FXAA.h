#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace FXAA {
        inline app::FXAA__Class** type_info = (app::FXAA__Class**)(modloader::win::memory::resolve_rva(0x04790228));
        inline app::FXAA__Class* get_class() {
            return il2cpp::get_class<app::FXAA__Class>(type_info, "UnityStandardAssets.CinematicEffects", "FXAA");
        }
        inline app::FXAA* create() {
            return il2cpp::create_object<app::FXAA>(get_class());
        }
    } // namespace FXAA
} // namespace app::classes::types
