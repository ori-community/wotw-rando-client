#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MemberAccessException {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MemberAccessException__Class** type_info;
        inline app::MemberAccessException__Class* get_class() {
            return il2cpp::get_class<app::MemberAccessException__Class>(type_info, "System", "MemberAccessException");
        }
        inline app::MemberAccessException* create() {
            return il2cpp::create_object<app::MemberAccessException>(get_class());
        }
    } // namespace MemberAccessException
} // namespace app::classes::types
