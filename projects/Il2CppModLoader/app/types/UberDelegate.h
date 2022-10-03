#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UberDelegate {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UberDelegate__Class** type_info;
        inline app::UberDelegate__Class* get_class() {
            return il2cpp::get_class<app::UberDelegate__Class>(type_info, "", "UberDelegate");
        }
        inline app::UberDelegate* create() {
            return il2cpp::create_object<app::UberDelegate>(get_class());
        }
    } // namespace UberDelegate
} // namespace app::classes::types
