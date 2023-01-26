#pragma once
#include <Modloader/app/structs/IMECompositionMode__Enum.h>
#include <Modloader/app/structs/IMECompositionMode__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IMECompositionMode__Enum {
        inline app::IMECompositionMode__Enum__Class** type_info() {
            static app::IMECompositionMode__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::IMECompositionMode__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::IMECompositionMode__Enum__Class* get_class() {
            return il2cpp::get_class<app::IMECompositionMode__Enum__Class>(type_info(), "UnityEngine", "IMECompositionMode");
        }
        inline app::IMECompositionMode__Enum* create() {
            return il2cpp::create_object<app::IMECompositionMode__Enum>(get_class());
        }
    } // namespace IMECompositionMode__Enum
} // namespace app::classes::types
