#pragma once
#include <Modloader/app/structs/LabelInfo__Array.h>
#include <Modloader/app/structs/LabelInfo__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LabelInfo__Array {
        inline app::LabelInfo__Array__Class** type_info() {
            static app::LabelInfo__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LabelInfo__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LabelInfo__Array__Class* get_class() {
            return il2cpp::get_class<app::LabelInfo__Array__Class>(type_info(), "System.Linq.Expressions.Interpreter", "LabelInfo[]");
        }
        inline app::LabelInfo__Array* create() {
            return il2cpp::create_object<app::LabelInfo__Array>(get_class());
        }
    } // namespace LabelInfo__Array
} // namespace app::classes::types
