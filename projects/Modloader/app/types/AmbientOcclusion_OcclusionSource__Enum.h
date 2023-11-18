#pragma once
#include <Modloader/app/structs/AmbientOcclusion_OcclusionSource__Enum.h>
#include <Modloader/app/structs/AmbientOcclusion_OcclusionSource__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AmbientOcclusion_OcclusionSource__Enum {
        inline app::AmbientOcclusion_OcclusionSource__Enum__Class** type_info() {
            static app::AmbientOcclusion_OcclusionSource__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AmbientOcclusion_OcclusionSource__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AmbientOcclusion_OcclusionSource__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::AmbientOcclusion_OcclusionSource__Enum__Class>(type_info(), "UnityStandardAssets.CinematicEffects", "AmbientOcclusion", "OcclusionSource");
        }
        inline app::AmbientOcclusion_OcclusionSource__Enum* create() {
            return il2cpp::create_object<app::AmbientOcclusion_OcclusionSource__Enum>(get_class());
        }
    } // namespace AmbientOcclusion_OcclusionSource__Enum
} // namespace app::classes::types
