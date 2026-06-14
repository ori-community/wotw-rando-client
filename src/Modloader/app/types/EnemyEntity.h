#pragma once
#include <Modloader/app/structs/EnemyEntity.h>
#include <Modloader/app/structs/EnemyEntity__Array.h>
#include <Modloader/app/structs/EnemyEntity__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EnemyEntity {
        inline app::EnemyEntity__Class** type_info() {
            static app::EnemyEntity__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::EnemyEntity__Class**)(modloader::win::memory::resolve_rva(0x0478CFE8));
            }
            return cache;
        }
        inline app::EnemyEntity__Class* get_class() {
            return il2cpp::get_class<app::EnemyEntity__Class>(type_info(), "Moon", "EnemyEntity");
        }
        inline app::EnemyEntity* create() {
            return il2cpp::create_object<app::EnemyEntity>(get_class());
        }
        inline app::EnemyEntity__Array* create_array(int size) {
            return il2cpp::array_new<app::EnemyEntity__Array>(get_class(), size);
        }
        inline app::EnemyEntity__Array* create_array(const std::vector<app::EnemyEntity*>& items) {
            return il2cpp::array_new<app::EnemyEntity__Array>(get_class(), items);
        }
    } // namespace EnemyEntity
} // namespace app::classes::types
