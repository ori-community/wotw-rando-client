#pragma once
#include <Modloader/app/structs/IVRSettings_Sync.h>
#include <Modloader/app/structs/IVRSettings_Sync__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IVRSettings_Sync {
        inline app::IVRSettings_Sync__Class** type_info() {
            static app::IVRSettings_Sync__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IVRSettings_Sync__Class**)(modloader::win::memory::resolve_rva(0x04727088));
            }
            return cache;
        }
        inline app::IVRSettings_Sync__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRSettings_Sync__Class>(type_info(), "ZenFulcrum.VR.OpenVRBinding", "IVRSettings", "_Sync");
        }
        inline app::IVRSettings_Sync* create() {
            return il2cpp::create_object<app::IVRSettings_Sync>(get_class());
        }
    } // namespace IVRSettings_Sync
} // namespace app::classes::types
