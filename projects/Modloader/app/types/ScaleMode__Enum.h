#pragma once
#include <Modloader/app/structs/ScaleMode__Enum.h>
#include <Modloader/app/structs/ScaleMode__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ScaleMode__Enum {
        inline app::ScaleMode__Enum__Class** type_info() {
            static app::ScaleMode__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ScaleMode__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ScaleMode__Enum__Class* get_class() {
            return il2cpp::get_class<app::ScaleMode__Enum__Class>(type_info(), "UnityEngine", "ScaleMode");
        }
        inline app::ScaleMode__Enum* create() {
            return il2cpp::create_object<app::ScaleMode__Enum>(get_class());
        }
    } // namespace ScaleMode__Enum
} // namespace app::classes::types
