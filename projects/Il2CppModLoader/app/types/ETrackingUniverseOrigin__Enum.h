#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ETrackingUniverseOrigin__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ETrackingUniverseOrigin__Enum__Class** type_info;
        inline app::ETrackingUniverseOrigin__Enum__Class* get_class() {
            return il2cpp::get_class<app::ETrackingUniverseOrigin__Enum__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "ETrackingUniverseOrigin");
        }
        inline app::ETrackingUniverseOrigin__Enum* create() {
            return il2cpp::create_object<app::ETrackingUniverseOrigin__Enum>(get_class());
        }
    } // namespace ETrackingUniverseOrigin__Enum
} // namespace app::classes::types
