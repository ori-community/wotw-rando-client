#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SeinCinematic {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SeinCinematic__Class** type_info;
        inline app::SeinCinematic__Class* get_class() {
            return il2cpp::get_class<app::SeinCinematic__Class>(type_info, "", "SeinCinematic");
        }
        inline app::SeinCinematic* create() {
            return il2cpp::create_object<app::SeinCinematic>(get_class());
        }
    } // namespace SeinCinematic
} // namespace app::classes::types
