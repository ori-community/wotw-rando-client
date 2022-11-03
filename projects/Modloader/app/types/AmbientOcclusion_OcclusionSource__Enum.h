#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace AmbientOcclusion_OcclusionSource__Enum {
        namespace {
            inline app::AmbientOcclusion_OcclusionSource__Enum__Class* type_info_ref = nullptr;
        }
        inline app::AmbientOcclusion_OcclusionSource__Enum__Class** type_info = &type_info_ref;
        inline app::AmbientOcclusion_OcclusionSource__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::AmbientOcclusion_OcclusionSource__Enum__Class>(type_info, "UnityStandardAssets.CinematicEffects", "AmbientOcclusion", "OcclusionSource");
        }
        inline app::AmbientOcclusion_OcclusionSource__Enum* create() {
            return il2cpp::create_object<app::AmbientOcclusion_OcclusionSource__Enum>(get_class());
        }
    } // namespace AmbientOcclusion_OcclusionSource__Enum
} // namespace app::classes::types
