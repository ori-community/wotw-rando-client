#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RegexNode__Array {
        namespace {
            app::RegexNode__Array__Class* type_info_ref = nullptr;
        }
        app::RegexNode__Array__Class** type_info = &type_info_ref;
        inline app::RegexNode__Array__Class* get_class() {
            return il2cpp::get_class<app::RegexNode__Array__Class>(type_info, "System.Text.RegularExpressions", "RegexNode[]");
        }
        inline app::RegexNode__Array* create() {
            return il2cpp::create_object<app::RegexNode__Array>(get_class());
        }
    } // namespace RegexNode__Array
} // namespace app::classes::types
