#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DefaultMemberAttribute {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DefaultMemberAttribute__Class** type_info;
        inline app::DefaultMemberAttribute__Class* get_class() {
            return il2cpp::get_class<app::DefaultMemberAttribute__Class>(type_info, "System.Reflection", "DefaultMemberAttribute");
        }
        inline app::DefaultMemberAttribute* create() {
            return il2cpp::create_object<app::DefaultMemberAttribute>(get_class());
        }
    } // namespace DefaultMemberAttribute
} // namespace app::classes::types
