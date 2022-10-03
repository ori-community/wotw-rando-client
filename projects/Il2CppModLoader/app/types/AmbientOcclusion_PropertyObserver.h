#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AmbientOcclusion_PropertyObserver {
        namespace {
            app::AmbientOcclusion_PropertyObserver__Class* type_info_ref = nullptr;
        }
        app::AmbientOcclusion_PropertyObserver__Class** type_info = &type_info_ref;
        inline app::AmbientOcclusion_PropertyObserver__Class* get_class() {
            return il2cpp::get_nested_class<app::AmbientOcclusion_PropertyObserver__Class>(type_info, "UnityStandardAssets.CinematicEffects", "AmbientOcclusion", "PropertyObserver");
        }
        inline app::AmbientOcclusion_PropertyObserver* create() {
            return il2cpp::create_object<app::AmbientOcclusion_PropertyObserver>(get_class());
        }
        inline app::AmbientOcclusion_PropertyObserver__Boxed* box(app::AmbientOcclusion_PropertyObserver value) {
            return il2cpp::box_value<app::AmbientOcclusion_PropertyObserver__Boxed>(get_class(), value);
        }
    } // namespace AmbientOcclusion_PropertyObserver
} // namespace app::classes::types
