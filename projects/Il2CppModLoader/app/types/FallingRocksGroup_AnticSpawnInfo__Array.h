#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace FallingRocksGroup_AnticSpawnInfo__Array {
        namespace {
            inline app::FallingRocksGroup_AnticSpawnInfo__Array__Class* type_info_ref = nullptr;
        }
        inline app::FallingRocksGroup_AnticSpawnInfo__Array__Class** type_info = &type_info_ref;
        inline app::FallingRocksGroup_AnticSpawnInfo__Array__Class* get_class() {
            return il2cpp::get_class<app::FallingRocksGroup_AnticSpawnInfo__Array__Class>(type_info, "", "FallingRocksGroup+AnticSpawnInfo[]");
        }
        inline app::FallingRocksGroup_AnticSpawnInfo__Array* create() {
            return il2cpp::create_object<app::FallingRocksGroup_AnticSpawnInfo__Array>(get_class());
        }
    } // namespace FallingRocksGroup_AnticSpawnInfo__Array
} // namespace app::classes::types
