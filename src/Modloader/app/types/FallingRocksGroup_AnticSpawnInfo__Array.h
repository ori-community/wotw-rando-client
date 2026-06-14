#pragma once
#include <Modloader/app/structs/FallingRocksGroup_AnticSpawnInfo__Array.h>
#include <Modloader/app/structs/FallingRocksGroup_AnticSpawnInfo__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FallingRocksGroup_AnticSpawnInfo__Array {
        inline app::FallingRocksGroup_AnticSpawnInfo__Array__Class** type_info() {
            static app::FallingRocksGroup_AnticSpawnInfo__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::FallingRocksGroup_AnticSpawnInfo__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::FallingRocksGroup_AnticSpawnInfo__Array__Class* get_class() {
            return il2cpp::get_class<app::FallingRocksGroup_AnticSpawnInfo__Array__Class>(type_info(), "", "FallingRocksGroup+AnticSpawnInfo[]");
        }
        inline app::FallingRocksGroup_AnticSpawnInfo__Array* create() {
            return il2cpp::create_object<app::FallingRocksGroup_AnticSpawnInfo__Array>(get_class());
        }
    } // namespace FallingRocksGroup_AnticSpawnInfo__Array
} // namespace app::classes::types
