#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MissingMemberException {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MissingMemberException__Class** type_info;
        inline app::MissingMemberException__Class* get_class() {
            return il2cpp::get_class<app::MissingMemberException__Class>(type_info, "System", "MissingMemberException");
        }
        inline app::MissingMemberException* create() {
            return il2cpp::create_object<app::MissingMemberException>(get_class());
        }
    } // namespace MissingMemberException
} // namespace app::classes::types
