#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ProcessWindowStyle__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ProcessWindowStyle__Enum__Class** type_info;
        inline app::ProcessWindowStyle__Enum__Class* get_class() {
            return il2cpp::get_class<app::ProcessWindowStyle__Enum__Class>(type_info, "System.Diagnostics", "ProcessWindowStyle");
        }
        inline app::ProcessWindowStyle__Enum* create() {
            return il2cpp::create_object<app::ProcessWindowStyle__Enum>(get_class());
        }
    } // namespace ProcessWindowStyle__Enum
} // namespace app::classes::types
