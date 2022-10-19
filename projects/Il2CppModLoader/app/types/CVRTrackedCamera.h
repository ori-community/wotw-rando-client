#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CVRTrackedCamera {
        inline app::CVRTrackedCamera__Class** type_info = (app::CVRTrackedCamera__Class**)(modloader::win::memory::resolve_rva(0x04711DC8));
        inline app::CVRTrackedCamera__Class* get_class() {
            return il2cpp::get_class<app::CVRTrackedCamera__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "CVRTrackedCamera");
        }
        inline app::CVRTrackedCamera* create() {
            return il2cpp::create_object<app::CVRTrackedCamera>(get_class());
        }
    } // namespace CVRTrackedCamera
} // namespace app::classes::types
