#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MemberTypes__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MemberTypes__Enum__Class** type_info;
        inline app::MemberTypes__Enum__Class* get_class() {
            return il2cpp::get_class<app::MemberTypes__Enum__Class>(type_info, "System.Reflection", "MemberTypes");
        }
        inline app::MemberTypes__Enum* create() {
            return il2cpp::create_object<app::MemberTypes__Enum>(get_class());
        }
    } // namespace MemberTypes__Enum
} // namespace app::classes::types
