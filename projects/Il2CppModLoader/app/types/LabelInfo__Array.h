#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LabelInfo__Array {
        namespace {
            app::LabelInfo__Array__Class* type_info_ref = nullptr;
        }
        app::LabelInfo__Array__Class** type_info = &type_info_ref;
        inline app::LabelInfo__Array__Class* get_class() {
            return il2cpp::get_class<app::LabelInfo__Array__Class>(type_info, "System.Linq.Expressions.Interpreter", "LabelInfo[]");
        }
        inline app::LabelInfo__Array* create() {
            return il2cpp::create_object<app::LabelInfo__Array>(get_class());
        }
    } // namespace LabelInfo__Array
} // namespace app::classes::types
