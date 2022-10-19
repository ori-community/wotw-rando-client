#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IVRNotifications_CreateNotification {
        inline app::IVRNotifications_CreateNotification__Class** type_info = (app::IVRNotifications_CreateNotification__Class**)(modloader::win::memory::resolve_rva(0x0473A640));
        inline app::IVRNotifications_CreateNotification__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRNotifications_CreateNotification__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRNotifications", "_CreateNotification");
        }
        inline app::IVRNotifications_CreateNotification* create() {
            return il2cpp::create_object<app::IVRNotifications_CreateNotification>(get_class());
        }
    } // namespace IVRNotifications_CreateNotification
} // namespace app::classes::types
