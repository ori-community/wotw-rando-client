#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BabySein {
        extern IL2CPP_MODLOADER_DLLEXPORT app::BabySein__Class** type_info;
        inline app::BabySein__Class* get_class() {
            return il2cpp::get_class<app::BabySein__Class>(type_info, "", "BabySein");
        }
        inline app::BabySein* create() {
            return il2cpp::create_object<app::BabySein>(get_class());
        }
    } // namespace BabySein
} // namespace app::classes::types
