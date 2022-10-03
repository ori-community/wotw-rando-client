#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AppId_t__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AppId_t__Array__Class** type_info;
        inline app::AppId_t__Array__Class* get_class() {
            return il2cpp::get_class<app::AppId_t__Array__Class>(type_info, "Steamworks", "AppId_t[]");
        }
        inline app::AppId_t__Array* create() {
            return il2cpp::create_object<app::AppId_t__Array>(get_class());
        }
    } // namespace AppId_t__Array
} // namespace app::classes::types
