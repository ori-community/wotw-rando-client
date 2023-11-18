#pragma once
#include <Modloader/app/structs/IVRSystem_GetTimeSinceLastVsync.h>
#include <Modloader/app/structs/IVRSystem_GetTimeSinceLastVsync__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IVRSystem_GetTimeSinceLastVsync {
        inline app::IVRSystem_GetTimeSinceLastVsync__Class** type_info() {
            static app::IVRSystem_GetTimeSinceLastVsync__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IVRSystem_GetTimeSinceLastVsync__Class**)(modloader::win::memory::resolve_rva(0x04773C88));
            }
            return cache;
        }
        inline app::IVRSystem_GetTimeSinceLastVsync__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRSystem_GetTimeSinceLastVsync__Class>(type_info(), "ZenFulcrum.VR.OpenVRBinding", "IVRSystem", "_GetTimeSinceLastVsync");
        }
        inline app::IVRSystem_GetTimeSinceLastVsync* create() {
            return il2cpp::create_object<app::IVRSystem_GetTimeSinceLastVsync>(get_class());
        }
    } // namespace IVRSystem_GetTimeSinceLastVsync
} // namespace app::classes::types
