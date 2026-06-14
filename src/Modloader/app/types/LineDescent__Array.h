#pragma once
#include <Modloader/app/structs/LineDescent__Array.h>
#include <Modloader/app/structs/LineDescent__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LineDescent__Array {
        inline app::LineDescent__Array__Class** type_info() {
            static app::LineDescent__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LineDescent__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LineDescent__Array__Class* get_class() {
            return il2cpp::get_class<app::LineDescent__Array__Class>(type_info(), "CatlikeCoding.TextBox", "LineDescent[]");
        }
        inline app::LineDescent__Array* create() {
            return il2cpp::create_object<app::LineDescent__Array>(get_class());
        }
    } // namespace LineDescent__Array
} // namespace app::classes::types
