#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SecurityAction__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SecurityAction__Enum__Class** type_info;
        inline app::SecurityAction__Enum__Class* get_class() {
            return il2cpp::get_class<app::SecurityAction__Enum__Class>(type_info, "System.Security.Permissions", "SecurityAction");
        }
        inline app::SecurityAction__Enum* create() {
            return il2cpp::create_object<app::SecurityAction__Enum>(get_class());
        }
    } // namespace SecurityAction__Enum
} // namespace app::classes::types
