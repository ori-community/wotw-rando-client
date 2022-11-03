#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace PlaneAlignment__Enum {
        namespace {
            inline app::PlaneAlignment__Enum__Class* type_info_ref = nullptr;
        }
        inline app::PlaneAlignment__Enum__Class** type_info = &type_info_ref;
        inline app::PlaneAlignment__Enum__Class* get_class() {
            return il2cpp::get_class<app::PlaneAlignment__Enum__Class>(type_info, "UnityEngine.Experimental.XR", "PlaneAlignment");
        }
        inline app::PlaneAlignment__Enum* create() {
            return il2cpp::create_object<app::PlaneAlignment__Enum>(get_class());
        }
    } // namespace PlaneAlignment__Enum
} // namespace app::classes::types
