#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IgnoreDataMemberAttribute {
        namespace {
            app::IgnoreDataMemberAttribute__Class* type_info_ref = nullptr;
        }
        app::IgnoreDataMemberAttribute__Class** type_info = &type_info_ref;
        inline app::IgnoreDataMemberAttribute__Class* get_class() {
            return il2cpp::get_class<app::IgnoreDataMemberAttribute__Class>(type_info, "System.Runtime.Serialization", "IgnoreDataMemberAttribute");
        }
        inline app::IgnoreDataMemberAttribute* create() {
            return il2cpp::create_object<app::IgnoreDataMemberAttribute>(get_class());
        }
    } // namespace IgnoreDataMemberAttribute
} // namespace app::classes::types
