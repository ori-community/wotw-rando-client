#pragma once
#include <Modloader/app/structs/LensAberrations_ChromaticAberrationSettings.h>
#include <Modloader/app/structs/LensAberrations_ChromaticAberrationSettings__Boxed.h>
#include <Modloader/app/structs/LensAberrations_ChromaticAberrationSettings__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LensAberrations_ChromaticAberrationSettings {
        inline app::LensAberrations_ChromaticAberrationSettings__Class** type_info() {
            static app::LensAberrations_ChromaticAberrationSettings__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LensAberrations_ChromaticAberrationSettings__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LensAberrations_ChromaticAberrationSettings__Class* get_class() {
            return il2cpp::get_nested_class<app::LensAberrations_ChromaticAberrationSettings__Class>(type_info(), "UnityStandardAssets.CinematicEffects", "LensAberrations", "ChromaticAberrationSettings");
        }
        inline app::LensAberrations_ChromaticAberrationSettings* create() {
            return il2cpp::create_object<app::LensAberrations_ChromaticAberrationSettings>(get_class());
        }
        inline app::LensAberrations_ChromaticAberrationSettings__Boxed* box(app::LensAberrations_ChromaticAberrationSettings value) {
            return il2cpp::box_value<app::LensAberrations_ChromaticAberrationSettings__Boxed>(get_class(), value);
        }
    } // namespace LensAberrations_ChromaticAberrationSettings
} // namespace app::classes::types
