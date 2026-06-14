#pragma once
#include <Modloader/app/structs/MortarWormEnemyDeath_Start_d_4.h>
#include <Modloader/app/structs/MortarWormEnemyDeath_Start_d_4__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MortarWormEnemyDeath_Start_d_4 {
        inline app::MortarWormEnemyDeath_Start_d_4__Class** type_info() {
            static app::MortarWormEnemyDeath_Start_d_4__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MortarWormEnemyDeath_Start_d_4__Class**)(modloader::win::memory::resolve_rva(0x0471E4E0));
            }
            return cache;
        }
        inline app::MortarWormEnemyDeath_Start_d_4__Class* get_class() {
            return il2cpp::get_nested_class<app::MortarWormEnemyDeath_Start_d_4__Class>(type_info(), "", "MortarWormEnemyDeath", "<Start>d__4");
        }
        inline app::MortarWormEnemyDeath_Start_d_4* create() {
            return il2cpp::create_object<app::MortarWormEnemyDeath_Start_d_4>(get_class());
        }
    } // namespace MortarWormEnemyDeath_Start_d_4
} // namespace app::classes::types
