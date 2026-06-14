#pragma once
#include <Modloader/app/structs/MovedFromAttribute.h>
#include <Modloader/app/structs/MovedFromAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MovedFromAttribute {
        inline app::MovedFromAttribute__Class** type_info() {
            static app::MovedFromAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MovedFromAttribute__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MovedFromAttribute__Class* get_class() {
            return il2cpp::get_class<app::MovedFromAttribute__Class>(type_info(), "UnityEngine.Scripting.APIUpdating", "MovedFromAttribute");
        }
        inline app::MovedFromAttribute* create() {
            return il2cpp::create_object<app::MovedFromAttribute>(get_class());
        }
    } // namespace MovedFromAttribute
} // namespace app::classes::types
