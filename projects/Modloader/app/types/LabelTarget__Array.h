#pragma once
#include <Modloader/app/structs/LabelTarget__Array.h>
#include <Modloader/app/structs/LabelTarget__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LabelTarget__Array {
        inline app::LabelTarget__Array__Class** type_info() {
            static app::LabelTarget__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LabelTarget__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LabelTarget__Array__Class* get_class() {
            return il2cpp::get_class<app::LabelTarget__Array__Class>(type_info(), "System.Linq.Expressions", "LabelTarget[]");
        }
        inline app::LabelTarget__Array* create() {
            return il2cpp::create_object<app::LabelTarget__Array>(get_class());
        }
    } // namespace LabelTarget__Array
} // namespace app::classes::types
