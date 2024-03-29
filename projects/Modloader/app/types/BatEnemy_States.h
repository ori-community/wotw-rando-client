#pragma once
#include <Modloader/app/structs/BatEnemy_States.h>
#include <Modloader/app/structs/BatEnemy_States__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BatEnemy_States {
        inline app::BatEnemy_States__Class** type_info() {
            static app::BatEnemy_States__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::BatEnemy_States__Class**)(modloader::win::memory::resolve_rva(0x04749780));
            }
            return cache;
        }
        inline app::BatEnemy_States__Class* get_class() {
            return il2cpp::get_nested_class<app::BatEnemy_States__Class>(type_info(), "", "BatEnemy", "States");
        }
        inline app::BatEnemy_States* create() {
            return il2cpp::create_object<app::BatEnemy_States>(get_class());
        }
    } // namespace BatEnemy_States
} // namespace app::classes::types
