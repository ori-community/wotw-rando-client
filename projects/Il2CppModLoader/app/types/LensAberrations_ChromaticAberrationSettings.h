#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LensAberrations_ChromaticAberrationSettings {
        namespace {
            app::LensAberrations_ChromaticAberrationSettings__Class* type_info_ref = nullptr;
        }
        app::LensAberrations_ChromaticAberrationSettings__Class** type_info = &type_info_ref;
        inline app::LensAberrations_ChromaticAberrationSettings__Class* get_class() {
            return il2cpp::get_nested_class<app::LensAberrations_ChromaticAberrationSettings__Class>(type_info, "UnityStandardAssets.CinematicEffects", "LensAberrations", "ChromaticAberrationSettings");
        }
        inline app::LensAberrations_ChromaticAberrationSettings* create() {
            return il2cpp::create_object<app::LensAberrations_ChromaticAberrationSettings>(get_class());
        }
        inline app::LensAberrations_ChromaticAberrationSettings__Boxed* box(app::LensAberrations_ChromaticAberrationSettings value) {
            return il2cpp::box_value<app::LensAberrations_ChromaticAberrationSettings__Boxed>(get_class(), value);
        }
    } // namespace LensAberrations_ChromaticAberrationSettings
} // namespace app::classes::types
