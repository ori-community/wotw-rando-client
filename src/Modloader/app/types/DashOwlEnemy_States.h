#pragma once
#include <Modloader/app/structs/DashOwlEnemy_States.h>
#include <Modloader/app/structs/DashOwlEnemy_States__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DashOwlEnemy_States {
        inline app::DashOwlEnemy_States__Class** type_info() {
            static app::DashOwlEnemy_States__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DashOwlEnemy_States__Class**)(modloader::win::memory::resolve_rva(0x0477B468));
            }
            return cache;
        }
        inline app::DashOwlEnemy_States__Class* get_class() {
            return il2cpp::get_nested_class<app::DashOwlEnemy_States__Class>(type_info(), "", "DashOwlEnemy", "States");
        }
        inline app::DashOwlEnemy_States* create() {
            return il2cpp::create_object<app::DashOwlEnemy_States>(get_class());
        }
    } // namespace DashOwlEnemy_States
} // namespace app::classes::types
