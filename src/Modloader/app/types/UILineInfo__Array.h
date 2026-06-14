#pragma once
#include <Modloader/app/structs/UILineInfo__Array.h>
#include <Modloader/app/structs/UILineInfo__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UILineInfo__Array {
        inline app::UILineInfo__Array__Class** type_info() {
            static app::UILineInfo__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UILineInfo__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UILineInfo__Array__Class* get_class() {
            return il2cpp::get_class<app::UILineInfo__Array__Class>(type_info(), "UnityEngine", "UILineInfo[]");
        }
        inline app::UILineInfo__Array* create() {
            return il2cpp::create_object<app::UILineInfo__Array>(get_class());
        }
    } // namespace UILineInfo__Array
} // namespace app::classes::types
