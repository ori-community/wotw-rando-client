#pragma once
#include <Modloader/app/structs/FishEnemy_States.h>
#include <Modloader/app/structs/FishEnemy_States__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FishEnemy_States {
        inline app::FishEnemy_States__Class** type_info() {
            static app::FishEnemy_States__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::FishEnemy_States__Class**)(modloader::win::memory::resolve_rva(0x0472F1D8));
            }
            return cache;
        }
        inline app::FishEnemy_States__Class* get_class() {
            return il2cpp::get_nested_class<app::FishEnemy_States__Class>(type_info(), "", "FishEnemy", "States");
        }
        inline app::FishEnemy_States* create() {
            return il2cpp::create_object<app::FishEnemy_States>(get_class());
        }
    } // namespace FishEnemy_States
} // namespace app::classes::types
