#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IVROverlay_CloseMessageOverlay {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IVROverlay_CloseMessageOverlay__Class** type_info;
        inline app::IVROverlay_CloseMessageOverlay__Class* get_class() {
            return il2cpp::get_nested_class<app::IVROverlay_CloseMessageOverlay__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVROverlay", "_CloseMessageOverlay");
        }
        inline app::IVROverlay_CloseMessageOverlay* create() {
            return il2cpp::create_object<app::IVROverlay_CloseMessageOverlay>(get_class());
        }
    } // namespace IVROverlay_CloseMessageOverlay
} // namespace app::classes::types
