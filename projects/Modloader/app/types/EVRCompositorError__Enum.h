#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace EVRCompositorError__Enum {
        namespace {
            inline app::EVRCompositorError__Enum__Class* type_info_ref = nullptr;
        }
        inline app::EVRCompositorError__Enum__Class** type_info = &type_info_ref;
        inline app::EVRCompositorError__Enum__Class* get_class() {
            return il2cpp::get_class<app::EVRCompositorError__Enum__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "EVRCompositorError");
        }
        inline app::EVRCompositorError__Enum* create() {
            return il2cpp::create_object<app::EVRCompositorError__Enum>(get_class());
        }
    } // namespace EVRCompositorError__Enum
} // namespace app::classes::types
