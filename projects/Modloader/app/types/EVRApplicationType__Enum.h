#pragma once
#include <Modloader/app/structs/EVRApplicationType__Enum.h>
#include <Modloader/app/structs/EVRApplicationType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EVRApplicationType__Enum {
        inline app::EVRApplicationType__Enum__Class** type_info() {
            static app::EVRApplicationType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EVRApplicationType__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EVRApplicationType__Enum__Class* get_class() {
            return il2cpp::get_class<app::EVRApplicationType__Enum__Class>(type_info(), "ZenFulcrum.VR.OpenVRBinding", "EVRApplicationType");
        }
        inline app::EVRApplicationType__Enum* create() {
            return il2cpp::create_object<app::EVRApplicationType__Enum>(get_class());
        }
    } // namespace EVRApplicationType__Enum
} // namespace app::classes::types
