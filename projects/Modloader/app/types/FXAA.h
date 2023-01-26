#pragma once
#include <Modloader/app/structs/FXAA.h>
#include <Modloader/app/structs/FXAA__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FXAA {
        inline app::FXAA__Class** type_info() {
            static app::FXAA__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::FXAA__Class**)(modloader::win::memory::resolve_rva(0x04790228));
            }
            return cache;
        }
        inline app::FXAA__Class* get_class() {
            return il2cpp::get_class<app::FXAA__Class>(type_info(), "UnityStandardAssets.CinematicEffects", "FXAA");
        }
        inline app::FXAA* create() {
            return il2cpp::create_object<app::FXAA>(get_class());
        }
    } // namespace FXAA
} // namespace app::classes::types
