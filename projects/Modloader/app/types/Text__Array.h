#pragma once
#include <Modloader/app/structs/Text__Array.h>
#include <Modloader/app/structs/Text__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Text__Array {
        inline app::Text__Array__Class** type_info() {
            static app::Text__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Text__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Text__Array__Class* get_class() {
            return il2cpp::get_class<app::Text__Array__Class>(type_info(), "UnityEngine.UI", "Text[]");
        }
        inline app::Text__Array* create() {
            return il2cpp::create_object<app::Text__Array>(get_class());
        }
    } // namespace Text__Array
} // namespace app::classes::types
