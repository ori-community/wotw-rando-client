#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IVRChaperoneSetup_ReloadFromDisk {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IVRChaperoneSetup_ReloadFromDisk__Class** type_info;
        inline app::IVRChaperoneSetup_ReloadFromDisk__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRChaperoneSetup_ReloadFromDisk__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRChaperoneSetup", "_ReloadFromDisk");
        }
        inline app::IVRChaperoneSetup_ReloadFromDisk* create() {
            return il2cpp::create_object<app::IVRChaperoneSetup_ReloadFromDisk>(get_class());
        }
    } // namespace IVRChaperoneSetup_ReloadFromDisk
} // namespace app::classes::types
