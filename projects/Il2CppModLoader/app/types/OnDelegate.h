#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace OnDelegate {
        extern IL2CPP_MODLOADER_DLLEXPORT app::OnDelegate__Class** type_info;
        inline app::OnDelegate__Class* get_class() {
            return il2cpp::get_class<app::OnDelegate__Class>(type_info, "", "OnDelegate");
        }
        inline app::OnDelegate* create() {
            return il2cpp::create_object<app::OnDelegate>(get_class());
        }
    } // namespace OnDelegate
} // namespace app::classes::types
