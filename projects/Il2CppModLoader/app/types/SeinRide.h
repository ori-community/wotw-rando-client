#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SeinRide {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SeinRide__Class** type_info;
        inline app::SeinRide__Class* get_class() {
            return il2cpp::get_class<app::SeinRide__Class>(type_info, "", "SeinRide");
        }
        inline app::SeinRide* create() {
            return il2cpp::create_object<app::SeinRide>(get_class());
        }
    } // namespace SeinRide
} // namespace app::classes::types
