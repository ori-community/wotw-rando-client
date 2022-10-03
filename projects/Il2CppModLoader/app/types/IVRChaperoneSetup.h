#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IVRChaperoneSetup {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IVRChaperoneSetup__Class** type_info;
        inline app::IVRChaperoneSetup__Class* get_class() {
            return il2cpp::get_class<app::IVRChaperoneSetup__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRChaperoneSetup");
        }
        inline app::IVRChaperoneSetup* create() {
            return il2cpp::create_object<app::IVRChaperoneSetup>(get_class());
        }
        inline app::IVRChaperoneSetup__Boxed* box(app::IVRChaperoneSetup value) {
            return il2cpp::box_value<app::IVRChaperoneSetup__Boxed>(get_class(), value);
        }
    } // namespace IVRChaperoneSetup
} // namespace app::classes::types
