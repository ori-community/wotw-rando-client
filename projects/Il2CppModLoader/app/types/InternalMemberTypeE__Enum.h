#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace InternalMemberTypeE__Enum {
        namespace {
            app::InternalMemberTypeE__Enum__Class* type_info_ref = nullptr;
        }
        app::InternalMemberTypeE__Enum__Class** type_info = &type_info_ref;
        inline app::InternalMemberTypeE__Enum__Class* get_class() {
            return il2cpp::get_class<app::InternalMemberTypeE__Enum__Class>(type_info, "System.Runtime.Serialization.Formatters.Binary", "InternalMemberTypeE");
        }
        inline app::InternalMemberTypeE__Enum* create() {
            return il2cpp::create_object<app::InternalMemberTypeE__Enum>(get_class());
        }
    } // namespace InternalMemberTypeE__Enum
} // namespace app::classes::types
