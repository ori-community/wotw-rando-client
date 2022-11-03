#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace DashOwlEnemy_States {
        inline app::DashOwlEnemy_States__Class** type_info = (app::DashOwlEnemy_States__Class**)(modloader::win::memory::resolve_rva(0x0477B468));
        inline app::DashOwlEnemy_States__Class* get_class() {
            return il2cpp::get_nested_class<app::DashOwlEnemy_States__Class>(type_info, "", "DashOwlEnemy", "States");
        }
        inline app::DashOwlEnemy_States* create() {
            return il2cpp::create_object<app::DashOwlEnemy_States>(get_class());
        }
    } // namespace DashOwlEnemy_States
} // namespace app::classes::types
