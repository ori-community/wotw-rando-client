#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IVROverlay_ShowOverlay {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IVROverlay_ShowOverlay__Class** type_info;
        inline app::IVROverlay_ShowOverlay__Class* get_class() {
            return il2cpp::get_nested_class<app::IVROverlay_ShowOverlay__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVROverlay", "_ShowOverlay");
        }
        inline app::IVROverlay_ShowOverlay* create() {
            return il2cpp::create_object<app::IVROverlay_ShowOverlay>(get_class());
        }
    } // namespace IVROverlay_ShowOverlay
} // namespace app::classes::types
