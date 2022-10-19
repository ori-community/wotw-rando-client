#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IVRChaperoneSetup_ReloadFromDisk {
        inline app::IVRChaperoneSetup_ReloadFromDisk__Class** type_info = (app::IVRChaperoneSetup_ReloadFromDisk__Class**)(modloader::win::memory::resolve_rva(0x04751E88));
        inline app::IVRChaperoneSetup_ReloadFromDisk__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRChaperoneSetup_ReloadFromDisk__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRChaperoneSetup", "_ReloadFromDisk");
        }
        inline app::IVRChaperoneSetup_ReloadFromDisk* create() {
            return il2cpp::create_object<app::IVRChaperoneSetup_ReloadFromDisk>(get_class());
        }
    } // namespace IVRChaperoneSetup_ReloadFromDisk
} // namespace app::classes::types
