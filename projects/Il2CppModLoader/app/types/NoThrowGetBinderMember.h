#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace NoThrowGetBinderMember {
        extern IL2CPP_MODLOADER_DLLEXPORT app::NoThrowGetBinderMember__Class** type_info;
        inline app::NoThrowGetBinderMember__Class* get_class() {
            return il2cpp::get_class<app::NoThrowGetBinderMember__Class>(type_info, "Newtonsoft.Json.Utilities", "NoThrowGetBinderMember");
        }
        inline app::NoThrowGetBinderMember* create() {
            return il2cpp::create_object<app::NoThrowGetBinderMember>(get_class());
        }
    } // namespace NoThrowGetBinderMember
} // namespace app::classes::types
