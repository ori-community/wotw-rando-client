#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace AmbientOcclusion_SampleCount__Enum {
        namespace {
            inline app::AmbientOcclusion_SampleCount__Enum__Class* type_info_ref = nullptr;
        }
        inline app::AmbientOcclusion_SampleCount__Enum__Class** type_info = &type_info_ref;
        inline app::AmbientOcclusion_SampleCount__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::AmbientOcclusion_SampleCount__Enum__Class>(type_info, "UnityStandardAssets.CinematicEffects", "AmbientOcclusion", "SampleCount");
        }
        inline app::AmbientOcclusion_SampleCount__Enum* create() {
            return il2cpp::create_object<app::AmbientOcclusion_SampleCount__Enum>(get_class());
        }
    } // namespace AmbientOcclusion_SampleCount__Enum
} // namespace app::classes::types
