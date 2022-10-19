#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace FallingRocksGroup_AnticSpawnInfo {
        inline app::FallingRocksGroup_AnticSpawnInfo__Class** type_info = (app::FallingRocksGroup_AnticSpawnInfo__Class**)(modloader::win::memory::resolve_rva(0x04756860));
        inline app::FallingRocksGroup_AnticSpawnInfo__Class* get_class() {
            return il2cpp::get_nested_class<app::FallingRocksGroup_AnticSpawnInfo__Class>(type_info, "", "FallingRocksGroup", "AnticSpawnInfo");
        }
        inline app::FallingRocksGroup_AnticSpawnInfo* create() {
            return il2cpp::create_object<app::FallingRocksGroup_AnticSpawnInfo>(get_class());
        }
        inline app::FallingRocksGroup_AnticSpawnInfo__Array* create_array(int size) {
            return il2cpp::array_new<app::FallingRocksGroup_AnticSpawnInfo__Array>(get_class(), size);
        }
        inline app::FallingRocksGroup_AnticSpawnInfo__Array* create_array(const std::vector<app::FallingRocksGroup_AnticSpawnInfo*>& items) {
            return il2cpp::array_new<app::FallingRocksGroup_AnticSpawnInfo__Array>(get_class(), items);
        }
    } // namespace FallingRocksGroup_AnticSpawnInfo
} // namespace app::classes::types
