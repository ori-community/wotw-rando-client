#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace InternalMemberValueE__Enum {
        namespace {
            app::InternalMemberValueE__Enum__Class* type_info_ref = nullptr;
        }
        app::InternalMemberValueE__Enum__Class** type_info = &type_info_ref;
        inline app::InternalMemberValueE__Enum__Class* get_class() {
            return il2cpp::get_class<app::InternalMemberValueE__Enum__Class>(type_info, "System.Runtime.Serialization.Formatters.Binary", "InternalMemberValueE");
        }
        inline app::InternalMemberValueE__Enum* create() {
            return il2cpp::create_object<app::InternalMemberValueE__Enum>(get_class());
        }
    } // namespace InternalMemberValueE__Enum
} // namespace app::classes::types
