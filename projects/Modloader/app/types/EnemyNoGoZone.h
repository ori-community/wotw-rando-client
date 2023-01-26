#pragma once
#include <Modloader/app/structs/EnemyNoGoZone.h>
#include <Modloader/app/structs/EnemyNoGoZone__Array.h>
#include <Modloader/app/structs/EnemyNoGoZone__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EnemyNoGoZone {
        inline app::EnemyNoGoZone__Class** type_info() {
            static app::EnemyNoGoZone__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::EnemyNoGoZone__Class**)(modloader::win::memory::resolve_rva(0x047522E0));
            }
            return cache;
        }
        inline app::EnemyNoGoZone__Class* get_class() {
            return il2cpp::get_class<app::EnemyNoGoZone__Class>(type_info(), "", "EnemyNoGoZone");
        }
        inline app::EnemyNoGoZone* create() {
            return il2cpp::create_object<app::EnemyNoGoZone>(get_class());
        }
        inline app::EnemyNoGoZone__Array* create_array(int size) {
            return il2cpp::array_new<app::EnemyNoGoZone__Array>(get_class(), size);
        }
        inline app::EnemyNoGoZone__Array* create_array(const std::vector<app::EnemyNoGoZone*>& items) {
            return il2cpp::array_new<app::EnemyNoGoZone__Array>(get_class(), items);
        }
    } // namespace EnemyNoGoZone
} // namespace app::classes::types
