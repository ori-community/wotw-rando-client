#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/BatEnemy_States__Class.h>
#include <Modloader/app/structs/BatEnemy_States.h>

namespace app::classes::types {
    namespace BatEnemy_States {
        inline app::BatEnemy_States__Class** type_info = (app::BatEnemy_States__Class**)(modloader::win::memory::resolve_rva(0x04749780));
        inline app::BatEnemy_States__Class* get_class() {
            return il2cpp::get_nested_class<app::BatEnemy_States__Class>(type_info, "", "BatEnemy", "States");
        }
        inline app::BatEnemy_States* create() {
            return il2cpp::create_object<app::BatEnemy_States>(get_class());
        }
    } // namespace BatEnemy_States
} // namespace app::classes::types
