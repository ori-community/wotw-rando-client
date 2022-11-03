#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace EVROverlayError__Enum {
        inline app::EVROverlayError__Enum__Class** type_info = (app::EVROverlayError__Enum__Class**)(modloader::win::memory::resolve_rva(0x047628C0));
        inline app::EVROverlayError__Enum__Class* get_class() {
            return il2cpp::get_class<app::EVROverlayError__Enum__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "EVROverlayError");
        }
        inline app::EVROverlayError__Enum* create() {
            return il2cpp::create_object<app::EVROverlayError__Enum>(get_class());
        }
    } // namespace EVROverlayError__Enum
} // namespace app::classes::types
