#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GetMemberBinder {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GetMemberBinder__Class** type_info;
        inline app::GetMemberBinder__Class* get_class() {
            return il2cpp::get_class<app::GetMemberBinder__Class>(type_info, "System.Dynamic", "GetMemberBinder");
        }
        inline app::GetMemberBinder* create() {
            return il2cpp::create_object<app::GetMemberBinder>(get_class());
        }
    } // namespace GetMemberBinder
} // namespace app::classes::types
