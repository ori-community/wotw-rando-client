#pragma once
#include <Modloader/app/structs/PlaneAlignment__Enum.h>
#include <Modloader/app/structs/PlaneAlignment__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlaneAlignment__Enum {
        inline app::PlaneAlignment__Enum__Class** type_info() {
            static app::PlaneAlignment__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PlaneAlignment__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PlaneAlignment__Enum__Class* get_class() {
            return il2cpp::get_class<app::PlaneAlignment__Enum__Class>(type_info(), "UnityEngine.Experimental.XR", "PlaneAlignment");
        }
        inline app::PlaneAlignment__Enum* create() {
            return il2cpp::create_object<app::PlaneAlignment__Enum>(get_class());
        }
    } // namespace PlaneAlignment__Enum
} // namespace app::classes::types
