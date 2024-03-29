#pragma once
#include <Modloader/app/structs/EVRInitError__Enum.h>
#include <Modloader/app/structs/EVRInitError__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EVRInitError__Enum {
        inline app::EVRInitError__Enum__Class** type_info() {
            static app::EVRInitError__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EVRInitError__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EVRInitError__Enum__Class* get_class() {
            return il2cpp::get_class<app::EVRInitError__Enum__Class>(type_info(), "ZenFulcrum.VR.OpenVRBinding", "EVRInitError");
        }
        inline app::EVRInitError__Enum* create() {
            return il2cpp::create_object<app::EVRInitError__Enum>(get_class());
        }
    } // namespace EVRInitError__Enum
} // namespace app::classes::types
