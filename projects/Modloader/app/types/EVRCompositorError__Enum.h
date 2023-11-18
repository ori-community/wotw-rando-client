#pragma once
#include <Modloader/app/structs/EVRCompositorError__Enum.h>
#include <Modloader/app/structs/EVRCompositorError__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EVRCompositorError__Enum {
        inline app::EVRCompositorError__Enum__Class** type_info() {
            static app::EVRCompositorError__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EVRCompositorError__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EVRCompositorError__Enum__Class* get_class() {
            return il2cpp::get_class<app::EVRCompositorError__Enum__Class>(type_info(), "ZenFulcrum.VR.OpenVRBinding", "EVRCompositorError");
        }
        inline app::EVRCompositorError__Enum* create() {
            return il2cpp::create_object<app::EVRCompositorError__Enum>(get_class());
        }
    } // namespace EVRCompositorError__Enum
} // namespace app::classes::types
