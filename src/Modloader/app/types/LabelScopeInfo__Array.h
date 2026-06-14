#pragma once
#include <Modloader/app/structs/LabelScopeInfo__Array.h>
#include <Modloader/app/structs/LabelScopeInfo__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LabelScopeInfo__Array {
        inline app::LabelScopeInfo__Array__Class** type_info() {
            static app::LabelScopeInfo__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LabelScopeInfo__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LabelScopeInfo__Array__Class* get_class() {
            return il2cpp::get_class<app::LabelScopeInfo__Array__Class>(type_info(), "System.Linq.Expressions.Interpreter", "LabelScopeInfo[]");
        }
        inline app::LabelScopeInfo__Array* create() {
            return il2cpp::create_object<app::LabelScopeInfo__Array>(get_class());
        }
    } // namespace LabelScopeInfo__Array
} // namespace app::classes::types
