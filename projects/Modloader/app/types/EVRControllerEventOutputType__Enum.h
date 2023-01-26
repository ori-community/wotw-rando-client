#pragma once
#include <Modloader/app/structs/EVRControllerEventOutputType__Enum.h>
#include <Modloader/app/structs/EVRControllerEventOutputType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EVRControllerEventOutputType__Enum {
        inline app::EVRControllerEventOutputType__Enum__Class** type_info() {
            static app::EVRControllerEventOutputType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EVRControllerEventOutputType__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EVRControllerEventOutputType__Enum__Class* get_class() {
            return il2cpp::get_class<app::EVRControllerEventOutputType__Enum__Class>(type_info(), "ZenFulcrum.VR.OpenVRBinding", "EVRControllerEventOutputType");
        }
        inline app::EVRControllerEventOutputType__Enum* create() {
            return il2cpp::create_object<app::EVRControllerEventOutputType__Enum>(get_class());
        }
    } // namespace EVRControllerEventOutputType__Enum
} // namespace app::classes::types
