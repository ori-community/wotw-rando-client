#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ICustomConstrainable {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ICustomConstrainable__Class** type_info;
        inline app::ICustomConstrainable__Class* get_class() {
            return il2cpp::get_class<app::ICustomConstrainable__Class>(type_info, "Moon.Timeline", "ICustomConstrainable");
        }
        inline app::ICustomConstrainable* create() {
            return il2cpp::create_object<app::ICustomConstrainable>(get_class());
        }
    } // namespace ICustomConstrainable
} // namespace app::classes::types
