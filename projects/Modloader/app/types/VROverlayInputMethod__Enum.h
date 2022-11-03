#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace VROverlayInputMethod__Enum {
        inline app::VROverlayInputMethod__Enum__Class** type_info = (app::VROverlayInputMethod__Enum__Class**)(modloader::win::memory::resolve_rva(0x047616A0));
        inline app::VROverlayInputMethod__Enum__Class* get_class() {
            return il2cpp::get_class<app::VROverlayInputMethod__Enum__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "VROverlayInputMethod");
        }
        inline app::VROverlayInputMethod__Enum* create() {
            return il2cpp::create_object<app::VROverlayInputMethod__Enum>(get_class());
        }
    } // namespace VROverlayInputMethod__Enum
} // namespace app::classes::types
