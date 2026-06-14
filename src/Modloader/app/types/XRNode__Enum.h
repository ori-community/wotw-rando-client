#pragma once
#include <Modloader/app/structs/XRNode__Enum.h>
#include <Modloader/app/structs/XRNode__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XRNode__Enum {
        inline app::XRNode__Enum__Class** type_info() {
            static app::XRNode__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::XRNode__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::XRNode__Enum__Class* get_class() {
            return il2cpp::get_class<app::XRNode__Enum__Class>(type_info(), "UnityEngine.XR", "XRNode");
        }
        inline app::XRNode__Enum* create() {
            return il2cpp::create_object<app::XRNode__Enum>(get_class());
        }
    } // namespace XRNode__Enum
} // namespace app::classes::types
