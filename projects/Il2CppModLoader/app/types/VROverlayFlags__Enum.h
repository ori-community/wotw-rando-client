#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace VROverlayFlags__Enum {
        inline app::VROverlayFlags__Enum__Class** type_info = (app::VROverlayFlags__Enum__Class**)(modloader::win::memory::resolve_rva(0x047551C8));
        inline app::VROverlayFlags__Enum__Class* get_class() {
            return il2cpp::get_class<app::VROverlayFlags__Enum__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "VROverlayFlags");
        }
        inline app::VROverlayFlags__Enum* create() {
            return il2cpp::create_object<app::VROverlayFlags__Enum>(get_class());
        }
    } // namespace VROverlayFlags__Enum
} // namespace app::classes::types
