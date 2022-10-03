#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MemberInfo_1__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MemberInfo_1__Array__Class** type_info;
        inline app::MemberInfo_1__Array__Class* get_class() {
            return il2cpp::get_class<app::MemberInfo_1__Array__Class>(type_info, "System.Reflection", "MemberInfo[]");
        }
        inline app::MemberInfo_1__Array* create() {
            return il2cpp::create_object<app::MemberInfo_1__Array>(get_class());
        }
    } // namespace MemberInfo_1__Array
} // namespace app::classes::types
