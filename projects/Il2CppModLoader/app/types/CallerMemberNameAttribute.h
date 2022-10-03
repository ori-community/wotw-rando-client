#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CallerMemberNameAttribute {
        namespace {
            app::CallerMemberNameAttribute__Class* type_info_ref = nullptr;
        }
        app::CallerMemberNameAttribute__Class** type_info = &type_info_ref;
        inline app::CallerMemberNameAttribute__Class* get_class() {
            return il2cpp::get_class<app::CallerMemberNameAttribute__Class>(type_info, "System.Runtime.CompilerServices", "CallerMemberNameAttribute");
        }
        inline app::CallerMemberNameAttribute* create() {
            return il2cpp::create_object<app::CallerMemberNameAttribute>(get_class());
        }
    } // namespace CallerMemberNameAttribute
} // namespace app::classes::types
