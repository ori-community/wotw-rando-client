#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LabelTarget__Array {
        namespace {
            app::LabelTarget__Array__Class* type_info_ref = nullptr;
        }
        app::LabelTarget__Array__Class** type_info = &type_info_ref;
        inline app::LabelTarget__Array__Class* get_class() {
            return il2cpp::get_class<app::LabelTarget__Array__Class>(type_info, "System.Linq.Expressions", "LabelTarget[]");
        }
        inline app::LabelTarget__Array* create() {
            return il2cpp::create_object<app::LabelTarget__Array>(get_class());
        }
    } // namespace LabelTarget__Array
} // namespace app::classes::types
