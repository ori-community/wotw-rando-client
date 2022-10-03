#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RisingWater {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RisingWater__Class** type_info;
        inline app::RisingWater__Class* get_class() {
            return il2cpp::get_class<app::RisingWater__Class>(type_info, "", "RisingWater");
        }
        inline app::RisingWater* create() {
            return il2cpp::create_object<app::RisingWater>(get_class());
        }
    } // namespace RisingWater
} // namespace app::classes::types
