#pragma once
#include <Modloader/app/structs/IVRChaperoneSetup_ReloadFromDisk.h>
#include <Modloader/app/structs/IVRChaperoneSetup_ReloadFromDisk__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IVRChaperoneSetup_ReloadFromDisk {
        inline app::IVRChaperoneSetup_ReloadFromDisk__Class** type_info() {
            static app::IVRChaperoneSetup_ReloadFromDisk__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IVRChaperoneSetup_ReloadFromDisk__Class**)(modloader::win::memory::resolve_rva(0x04751E88));
            }
            return cache;
        }
        inline app::IVRChaperoneSetup_ReloadFromDisk__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRChaperoneSetup_ReloadFromDisk__Class>(type_info(), "ZenFulcrum.VR.OpenVRBinding", "IVRChaperoneSetup", "_ReloadFromDisk");
        }
        inline app::IVRChaperoneSetup_ReloadFromDisk* create() {
            return il2cpp::create_object<app::IVRChaperoneSetup_ReloadFromDisk>(get_class());
        }
    } // namespace IVRChaperoneSetup_ReloadFromDisk
} // namespace app::classes::types
