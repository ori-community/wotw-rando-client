#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ScreenOverlay_OverlayBlendMode__Enum {
        namespace {
            app::ScreenOverlay_OverlayBlendMode__Enum__Class* type_info_ref = nullptr;
        }
        app::ScreenOverlay_OverlayBlendMode__Enum__Class** type_info = &type_info_ref;
        inline app::ScreenOverlay_OverlayBlendMode__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::ScreenOverlay_OverlayBlendMode__Enum__Class>(type_info, "UnityStandardAssets.ImageEffects", "ScreenOverlay", "OverlayBlendMode");
        }
        inline app::ScreenOverlay_OverlayBlendMode__Enum* create() {
            return il2cpp::create_object<app::ScreenOverlay_OverlayBlendMode__Enum>(get_class());
        }
    } // namespace ScreenOverlay_OverlayBlendMode__Enum
} // namespace app::classes::types
