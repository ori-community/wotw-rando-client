#pragma once
#include <Modloader/app/structs/EVRComponentProperty__Enum.h>
#include <Modloader/app/structs/EVRComponentProperty__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EVRComponentProperty__Enum {
        inline app::EVRComponentProperty__Enum__Class** type_info() {
            static app::EVRComponentProperty__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EVRComponentProperty__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EVRComponentProperty__Enum__Class* get_class() {
            return il2cpp::get_class<app::EVRComponentProperty__Enum__Class>(type_info(), "ZenFulcrum.VR.OpenVRBinding", "EVRComponentProperty");
        }
        inline app::EVRComponentProperty__Enum* create() {
            return il2cpp::create_object<app::EVRComponentProperty__Enum>(get_class());
        }
    } // namespace EVRComponentProperty__Enum
} // namespace app::classes::types
