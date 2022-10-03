#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IVROverlay {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IVROverlay__Class** type_info;
        inline app::IVROverlay__Class* get_class() {
            return il2cpp::get_class<app::IVROverlay__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVROverlay");
        }
        inline app::IVROverlay* create() {
            return il2cpp::create_object<app::IVROverlay>(get_class());
        }
        inline app::IVROverlay__Boxed* box(app::IVROverlay value) {
            return il2cpp::box_value<app::IVROverlay__Boxed>(get_class(), value);
        }
    } // namespace IVROverlay
} // namespace app::classes::types
