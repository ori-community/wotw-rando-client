#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace AmbientOcclusion {
        namespace {
            inline app::AmbientOcclusion__Class* type_info_ref = nullptr;
        }
        inline app::AmbientOcclusion__Class** type_info = &type_info_ref;
        inline app::AmbientOcclusion__Class* get_class() {
            return il2cpp::get_class<app::AmbientOcclusion__Class>(type_info, "UnityStandardAssets.CinematicEffects", "AmbientOcclusion");
        }
        inline app::AmbientOcclusion* create() {
            return il2cpp::create_object<app::AmbientOcclusion>(get_class());
        }
    } // namespace AmbientOcclusion
} // namespace app::classes::types
