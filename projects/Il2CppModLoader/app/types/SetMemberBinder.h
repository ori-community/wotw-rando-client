#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SetMemberBinder {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SetMemberBinder__Class** type_info;
        inline app::SetMemberBinder__Class* get_class() {
            return il2cpp::get_class<app::SetMemberBinder__Class>(type_info, "System.Dynamic", "SetMemberBinder");
        }
        inline app::SetMemberBinder* create() {
            return il2cpp::create_object<app::SetMemberBinder>(get_class());
        }
    } // namespace SetMemberBinder
} // namespace app::classes::types
