#pragma once
#include <Modloader/app/structs/RockyEnemyRock.h>
#include <Modloader/app/structs/RockyEnemyRock__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RockyEnemyRock {
        inline app::RockyEnemyRock__Class** type_info() {
            static app::RockyEnemyRock__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RockyEnemyRock__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RockyEnemyRock__Class* get_class() {
            return il2cpp::get_class<app::RockyEnemyRock__Class>(type_info(), "", "RockyEnemyRock");
        }
        inline app::RockyEnemyRock* create() {
            return il2cpp::create_object<app::RockyEnemyRock>(get_class());
        }
    } // namespace RockyEnemyRock
} // namespace app::classes::types
