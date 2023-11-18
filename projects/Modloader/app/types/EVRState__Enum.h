#pragma once
#include <Modloader/app/structs/EVRState__Enum.h>
#include <Modloader/app/structs/EVRState__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EVRState__Enum {
        inline app::EVRState__Enum__Class** type_info() {
            static app::EVRState__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EVRState__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EVRState__Enum__Class* get_class() {
            return il2cpp::get_class<app::EVRState__Enum__Class>(type_info(), "ZenFulcrum.VR.OpenVRBinding", "EVRState");
        }
        inline app::EVRState__Enum* create() {
            return il2cpp::create_object<app::EVRState__Enum>(get_class());
        }
    } // namespace EVRState__Enum
} // namespace app::classes::types
