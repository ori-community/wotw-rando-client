#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CVROverlay {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CVROverlay__Class** type_info;
        inline app::CVROverlay__Class* get_class() {
            return il2cpp::get_class<app::CVROverlay__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "CVROverlay");
        }
        inline app::CVROverlay* create() {
            return il2cpp::create_object<app::CVROverlay>(get_class());
        }
    } // namespace CVROverlay
} // namespace app::classes::types
