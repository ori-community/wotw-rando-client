#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LensAberrations {
        namespace {
            app::LensAberrations__Class* type_info_ref = nullptr;
        }
        app::LensAberrations__Class** type_info = &type_info_ref;
        inline app::LensAberrations__Class* get_class() {
            return il2cpp::get_class<app::LensAberrations__Class>(type_info, "UnityStandardAssets.CinematicEffects", "LensAberrations");
        }
        inline app::LensAberrations* create() {
            return il2cpp::create_object<app::LensAberrations>(get_class());
        }
    } // namespace LensAberrations
} // namespace app::classes::types
