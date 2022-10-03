#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FallingRocksGroup_RockInfo {
        extern IL2CPP_MODLOADER_DLLEXPORT app::FallingRocksGroup_RockInfo__Class** type_info;
        inline app::FallingRocksGroup_RockInfo__Class* get_class() {
            return il2cpp::get_nested_class<app::FallingRocksGroup_RockInfo__Class>(type_info, "", "FallingRocksGroup", "RockInfo");
        }
        inline app::FallingRocksGroup_RockInfo* create() {
            return il2cpp::create_object<app::FallingRocksGroup_RockInfo>(get_class());
        }
        inline app::FallingRocksGroup_RockInfo__Array* create_array(int size) {
            return il2cpp::array_new<app::FallingRocksGroup_RockInfo__Array>(get_class(), size);
        }
    } // namespace FallingRocksGroup_RockInfo
} // namespace app::classes::types
