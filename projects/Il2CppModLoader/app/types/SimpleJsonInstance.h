#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SimpleJsonInstance {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SimpleJsonInstance__Class** type_info;
        inline app::SimpleJsonInstance__Class* get_class() {
            return il2cpp::get_class<app::SimpleJsonInstance__Class>(type_info, "PlayFab.Json", "SimpleJsonInstance");
        }
        inline app::SimpleJsonInstance* create() {
            return il2cpp::create_object<app::SimpleJsonInstance>(get_class());
        }
    } // namespace SimpleJsonInstance
} // namespace app::classes::types
