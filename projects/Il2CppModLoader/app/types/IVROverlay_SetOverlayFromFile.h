#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IVROverlay_SetOverlayFromFile {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IVROverlay_SetOverlayFromFile__Class** type_info;
        inline app::IVROverlay_SetOverlayFromFile__Class* get_class() {
            return il2cpp::get_nested_class<app::IVROverlay_SetOverlayFromFile__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVROverlay", "_SetOverlayFromFile");
        }
        inline app::IVROverlay_SetOverlayFromFile* create() {
            return il2cpp::create_object<app::IVROverlay_SetOverlayFromFile>(get_class());
        }
    } // namespace IVROverlay_SetOverlayFromFile
} // namespace app::classes::types
