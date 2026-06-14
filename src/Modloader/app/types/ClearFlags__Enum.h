#pragma once
#include <Modloader/app/structs/ClearFlags__Enum.h>
#include <Modloader/app/structs/ClearFlags__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ClearFlags__Enum {
        inline app::ClearFlags__Enum__Class** type_info() {
            static app::ClearFlags__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ClearFlags__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ClearFlags__Enum__Class* get_class() {
            return il2cpp::get_class<app::ClearFlags__Enum__Class>(type_info(), "UnityEngine.Rendering", "ClearFlags");
        }
        inline app::ClearFlags__Enum* create() {
            return il2cpp::create_object<app::ClearFlags__Enum>(get_class());
        }
    } // namespace ClearFlags__Enum
} // namespace app::classes::types
