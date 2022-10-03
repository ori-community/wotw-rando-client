#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DllNotFoundException {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DllNotFoundException__Class** type_info;
        inline app::DllNotFoundException__Class* get_class() {
            return il2cpp::get_class<app::DllNotFoundException__Class>(type_info, "System", "DllNotFoundException");
        }
        inline app::DllNotFoundException* create() {
            return il2cpp::create_object<app::DllNotFoundException>(get_class());
        }
    } // namespace DllNotFoundException
} // namespace app::classes::types
