#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EnumMemberAttribute {
        namespace {
            app::EnumMemberAttribute__Class* type_info_ref = nullptr;
        }
        app::EnumMemberAttribute__Class** type_info = &type_info_ref;
        inline app::EnumMemberAttribute__Class* get_class() {
            return il2cpp::get_class<app::EnumMemberAttribute__Class>(type_info, "System.Runtime.Serialization", "EnumMemberAttribute");
        }
        inline app::EnumMemberAttribute* create() {
            return il2cpp::create_object<app::EnumMemberAttribute>(get_class());
        }
    } // namespace EnumMemberAttribute
} // namespace app::classes::types
