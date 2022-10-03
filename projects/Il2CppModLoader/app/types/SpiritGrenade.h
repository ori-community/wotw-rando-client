#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SpiritGrenade {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SpiritGrenade__Class** type_info;
        inline app::SpiritGrenade__Class* get_class() {
            return il2cpp::get_class<app::SpiritGrenade__Class>(type_info, "", "SpiritGrenade");
        }
        inline app::SpiritGrenade* create() {
            return il2cpp::create_object<app::SpiritGrenade>(get_class());
        }
    } // namespace SpiritGrenade
} // namespace app::classes::types
