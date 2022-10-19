#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ScreenSpaceReflection_ScreenEdgeMask {
        namespace {
            inline app::ScreenSpaceReflection_ScreenEdgeMask__Class* type_info_ref = nullptr;
        }
        inline app::ScreenSpaceReflection_ScreenEdgeMask__Class** type_info = &type_info_ref;
        inline app::ScreenSpaceReflection_ScreenEdgeMask__Class* get_class() {
            return il2cpp::get_nested_class<app::ScreenSpaceReflection_ScreenEdgeMask__Class>(type_info, "UnityStandardAssets.CinematicEffects", "ScreenSpaceReflection", "ScreenEdgeMask");
        }
        inline app::ScreenSpaceReflection_ScreenEdgeMask* create() {
            return il2cpp::create_object<app::ScreenSpaceReflection_ScreenEdgeMask>(get_class());
        }
        inline app::ScreenSpaceReflection_ScreenEdgeMask__Boxed* box(app::ScreenSpaceReflection_ScreenEdgeMask value) {
            return il2cpp::box_value<app::ScreenSpaceReflection_ScreenEdgeMask__Boxed>(get_class(), value);
        }
    } // namespace ScreenSpaceReflection_ScreenEdgeMask
} // namespace app::classes::types
