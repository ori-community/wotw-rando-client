#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SeinStomp {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SeinStomp__Class** type_info;
        inline app::SeinStomp__Class* get_class() {
            return il2cpp::get_class<app::SeinStomp__Class>(type_info, "", "SeinStomp");
        }
        inline app::SeinStomp* create() {
            return il2cpp::create_object<app::SeinStomp>(get_class());
        }
    } // namespace SeinStomp
} // namespace app::classes::types
