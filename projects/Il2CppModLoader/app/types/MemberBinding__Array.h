#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MemberBinding__Array {
        namespace {
            app::MemberBinding__Array__Class* type_info_ref = nullptr;
        }
        app::MemberBinding__Array__Class** type_info = &type_info_ref;
        inline app::MemberBinding__Array__Class* get_class() {
            return il2cpp::get_class<app::MemberBinding__Array__Class>(type_info, "System.Linq.Expressions", "MemberBinding[]");
        }
        inline app::MemberBinding__Array* create() {
            return il2cpp::create_object<app::MemberBinding__Array>(get_class());
        }
    } // namespace MemberBinding__Array
} // namespace app::classes::types
