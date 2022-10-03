#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IVROverlay_HideOverlay {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IVROverlay_HideOverlay__Class** type_info;
        inline app::IVROverlay_HideOverlay__Class* get_class() {
            return il2cpp::get_nested_class<app::IVROverlay_HideOverlay__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVROverlay", "_HideOverlay");
        }
        inline app::IVROverlay_HideOverlay* create() {
            return il2cpp::create_object<app::IVROverlay_HideOverlay>(get_class());
        }
    } // namespace IVROverlay_HideOverlay
} // namespace app::classes::types
