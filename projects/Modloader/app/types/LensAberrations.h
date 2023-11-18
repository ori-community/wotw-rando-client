#pragma once
#include <Modloader/app/structs/LensAberrations.h>
#include <Modloader/app/structs/LensAberrations__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LensAberrations {
        inline app::LensAberrations__Class** type_info() {
            static app::LensAberrations__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LensAberrations__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LensAberrations__Class* get_class() {
            return il2cpp::get_class<app::LensAberrations__Class>(type_info(), "UnityStandardAssets.CinematicEffects", "LensAberrations");
        }
        inline app::LensAberrations* create() {
            return il2cpp::create_object<app::LensAberrations>(get_class());
        }
    } // namespace LensAberrations
} // namespace app::classes::types
