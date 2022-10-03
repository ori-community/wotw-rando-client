#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XboxOne {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XboxOne__Class** type_info;
        inline app::XboxOne__Class* get_class() {
            return il2cpp::get_class<app::XboxOne__Class>(type_info, "", "XboxOne");
        }
        inline app::XboxOne* create() {
            return il2cpp::create_object<app::XboxOne>(get_class());
        }
    } // namespace XboxOne
} // namespace app::classes::types
