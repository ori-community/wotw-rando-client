#pragma once
#include <Modloader/app/structs/RockyEnemy_States.h>
#include <Modloader/app/structs/RockyEnemy_States__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RockyEnemy_States {
        inline app::RockyEnemy_States__Class** type_info() {
            static app::RockyEnemy_States__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::RockyEnemy_States__Class**)(modloader::win::memory::resolve_rva(0x0474B258));
            }
            return cache;
        }
        inline app::RockyEnemy_States__Class* get_class() {
            return il2cpp::get_nested_class<app::RockyEnemy_States__Class>(type_info(), "", "RockyEnemy", "States");
        }
        inline app::RockyEnemy_States* create() {
            return il2cpp::create_object<app::RockyEnemy_States>(get_class());
        }
    } // namespace RockyEnemy_States
} // namespace app::classes::types
