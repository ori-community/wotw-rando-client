#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LeaseState__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::LeaseState__Enum__Class** type_info;
        inline app::LeaseState__Enum__Class* get_class() {
            return il2cpp::get_class<app::LeaseState__Enum__Class>(type_info, "System.Runtime.Remoting.Lifetime", "LeaseState");
        }
        inline app::LeaseState__Enum* create() {
            return il2cpp::create_object<app::LeaseState__Enum>(get_class());
        }
    } // namespace LeaseState__Enum
} // namespace app::classes::types
