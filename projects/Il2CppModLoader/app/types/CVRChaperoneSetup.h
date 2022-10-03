#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CVRChaperoneSetup {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CVRChaperoneSetup__Class** type_info;
        inline app::CVRChaperoneSetup__Class* get_class() {
            return il2cpp::get_class<app::CVRChaperoneSetup__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "CVRChaperoneSetup");
        }
        inline app::CVRChaperoneSetup* create() {
            return il2cpp::create_object<app::CVRChaperoneSetup>(get_class());
        }
    } // namespace CVRChaperoneSetup
} // namespace app::classes::types
