#pragma once
#include <Modloader/app/structs/EVRMouseButton__Enum.h>
#include <Modloader/app/structs/EVRMouseButton__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EVRMouseButton__Enum {
        inline app::EVRMouseButton__Enum__Class** type_info() {
            static app::EVRMouseButton__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EVRMouseButton__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EVRMouseButton__Enum__Class* get_class() {
            return il2cpp::get_class<app::EVRMouseButton__Enum__Class>(type_info(), "ZenFulcrum.VR.OpenVRBinding", "EVRMouseButton");
        }
        inline app::EVRMouseButton__Enum* create() {
            return il2cpp::create_object<app::EVRMouseButton__Enum>(get_class());
        }
    } // namespace EVRMouseButton__Enum
} // namespace app::classes::types
