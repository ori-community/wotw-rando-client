#pragma once
#include <Modloader/app/structs/AmbientOcclusion_PropertyObserver.h>
#include <Modloader/app/structs/AmbientOcclusion_PropertyObserver__Boxed.h>
#include <Modloader/app/structs/AmbientOcclusion_PropertyObserver__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AmbientOcclusion_PropertyObserver {
        inline app::AmbientOcclusion_PropertyObserver__Class** type_info() {
            static app::AmbientOcclusion_PropertyObserver__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AmbientOcclusion_PropertyObserver__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AmbientOcclusion_PropertyObserver__Class* get_class() {
            return il2cpp::get_nested_class<app::AmbientOcclusion_PropertyObserver__Class>(type_info(), "UnityStandardAssets.CinematicEffects", "AmbientOcclusion", "PropertyObserver");
        }
        inline app::AmbientOcclusion_PropertyObserver* create() {
            return il2cpp::create_object<app::AmbientOcclusion_PropertyObserver>(get_class());
        }
        inline app::AmbientOcclusion_PropertyObserver__Boxed* box(app::AmbientOcclusion_PropertyObserver value) {
            return il2cpp::box_value<app::AmbientOcclusion_PropertyObserver__Boxed>(get_class(), value);
        }
    } // namespace AmbientOcclusion_PropertyObserver
} // namespace app::classes::types
