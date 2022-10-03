#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MemberBindingType__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MemberBindingType__Enum__Class** type_info;
        inline app::MemberBindingType__Enum__Class* get_class() {
            return il2cpp::get_class<app::MemberBindingType__Enum__Class>(type_info, "System.Linq.Expressions", "MemberBindingType");
        }
        inline app::MemberBindingType__Enum* create() {
            return il2cpp::create_object<app::MemberBindingType__Enum>(get_class());
        }
    } // namespace MemberBindingType__Enum
} // namespace app::classes::types
