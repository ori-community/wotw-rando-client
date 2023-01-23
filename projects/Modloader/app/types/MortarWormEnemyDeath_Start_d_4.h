#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/MortarWormEnemyDeath_Start_d_4__Class.h>
#include <Modloader/app/structs/MortarWormEnemyDeath_Start_d_4.h>

namespace app::classes::types {
    namespace MortarWormEnemyDeath_Start_d_4 {
        inline app::MortarWormEnemyDeath_Start_d_4__Class** type_info = (app::MortarWormEnemyDeath_Start_d_4__Class**)(modloader::win::memory::resolve_rva(0x0471E4E0));
        inline app::MortarWormEnemyDeath_Start_d_4__Class* get_class() {
            return il2cpp::get_nested_class<app::MortarWormEnemyDeath_Start_d_4__Class>(type_info, "", "MortarWormEnemyDeath", "<Start>d__4");
        }
        inline app::MortarWormEnemyDeath_Start_d_4* create() {
            return il2cpp::create_object<app::MortarWormEnemyDeath_Start_d_4>(get_class());
        }
    } // namespace MortarWormEnemyDeath_Start_d_4
} // namespace app::classes::types
