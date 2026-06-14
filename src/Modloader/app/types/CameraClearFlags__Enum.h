#pragma once
#include <Modloader/app/structs/CameraClearFlags__Enum.h>
#include <Modloader/app/structs/CameraClearFlags__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CameraClearFlags__Enum {
        inline app::CameraClearFlags__Enum__Class** type_info() {
            static app::CameraClearFlags__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CameraClearFlags__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CameraClearFlags__Enum__Class* get_class() {
            return il2cpp::get_class<app::CameraClearFlags__Enum__Class>(type_info(), "UnityEngine", "CameraClearFlags");
        }
        inline app::CameraClearFlags__Enum* create() {
            return il2cpp::create_object<app::CameraClearFlags__Enum>(get_class());
        }
    } // namespace CameraClearFlags__Enum
} // namespace app::classes::types
