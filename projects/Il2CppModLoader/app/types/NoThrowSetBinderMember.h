#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace NoThrowSetBinderMember {
        extern IL2CPP_MODLOADER_DLLEXPORT app::NoThrowSetBinderMember__Class** type_info;
        inline app::NoThrowSetBinderMember__Class* get_class() {
            return il2cpp::get_class<app::NoThrowSetBinderMember__Class>(type_info, "Newtonsoft.Json.Utilities", "NoThrowSetBinderMember");
        }
        inline app::NoThrowSetBinderMember* create() {
            return il2cpp::create_object<app::NoThrowSetBinderMember>(get_class());
        }
    } // namespace NoThrowSetBinderMember
} // namespace app::classes::types
