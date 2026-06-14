#pragma once
#include <Modloader/app/structs/ETrackingUniverseOrigin__Enum.h>
#include <Modloader/app/structs/ETrackingUniverseOrigin__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ETrackingUniverseOrigin__Enum {
        inline app::ETrackingUniverseOrigin__Enum__Class** type_info() {
            static app::ETrackingUniverseOrigin__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ETrackingUniverseOrigin__Enum__Class**)(modloader::win::memory::resolve_rva(0x047660C0));
            }
            return cache;
        }
        inline app::ETrackingUniverseOrigin__Enum__Class* get_class() {
            return il2cpp::get_class<app::ETrackingUniverseOrigin__Enum__Class>(type_info(), "ZenFulcrum.VR.OpenVRBinding", "ETrackingUniverseOrigin");
        }
        inline app::ETrackingUniverseOrigin__Enum* create() {
            return il2cpp::create_object<app::ETrackingUniverseOrigin__Enum>(get_class());
        }
    } // namespace ETrackingUniverseOrigin__Enum
} // namespace app::classes::types
