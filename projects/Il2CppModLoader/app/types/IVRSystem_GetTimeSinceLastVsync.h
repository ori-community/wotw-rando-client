#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IVRSystem_GetTimeSinceLastVsync {
        inline app::IVRSystem_GetTimeSinceLastVsync__Class** type_info = (app::IVRSystem_GetTimeSinceLastVsync__Class**)(modloader::win::memory::resolve_rva(0x04773C88));
        inline app::IVRSystem_GetTimeSinceLastVsync__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRSystem_GetTimeSinceLastVsync__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRSystem", "_GetTimeSinceLastVsync");
        }
        inline app::IVRSystem_GetTimeSinceLastVsync* create() {
            return il2cpp::create_object<app::IVRSystem_GetTimeSinceLastVsync>(get_class());
        }
    } // namespace IVRSystem_GetTimeSinceLastVsync
} // namespace app::classes::types
