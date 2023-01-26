#pragma once
#include <Modloader/app/structs/ScreenSpaceReflection.h>
#include <Modloader/app/structs/ScreenSpaceReflection__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ScreenSpaceReflection {
        inline app::ScreenSpaceReflection__Class** type_info() {
            static app::ScreenSpaceReflection__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ScreenSpaceReflection__Class**)(modloader::win::memory::resolve_rva(0x047733A0));
            }
            return cache;
        }
        inline app::ScreenSpaceReflection__Class* get_class() {
            return il2cpp::get_class<app::ScreenSpaceReflection__Class>(type_info(), "UnityStandardAssets.CinematicEffects", "ScreenSpaceReflection");
        }
        inline app::ScreenSpaceReflection* create() {
            return il2cpp::create_object<app::ScreenSpaceReflection>(get_class());
        }
    } // namespace ScreenSpaceReflection
} // namespace app::classes::types
