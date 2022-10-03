#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ReEngageUI {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ReEngageUI__Class** type_info;
        inline app::ReEngageUI__Class* get_class() {
            return il2cpp::get_class<app::ReEngageUI__Class>(type_info, "", "ReEngageUI");
        }
        inline app::ReEngageUI* create() {
            return il2cpp::create_object<app::ReEngageUI>(get_class());
        }
    } // namespace ReEngageUI
} // namespace app::classes::types
