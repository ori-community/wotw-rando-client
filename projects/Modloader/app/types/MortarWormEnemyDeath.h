#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MortarWormEnemyDeath {
        namespace {
            inline app::MortarWormEnemyDeath__Class* type_info_ref = nullptr;
        }
        inline app::MortarWormEnemyDeath__Class** type_info = &type_info_ref;
        inline app::MortarWormEnemyDeath__Class* get_class() {
            return il2cpp::get_class<app::MortarWormEnemyDeath__Class>(type_info, "", "MortarWormEnemyDeath");
        }
        inline app::MortarWormEnemyDeath* create() {
            return il2cpp::create_object<app::MortarWormEnemyDeath>(get_class());
        }
    } // namespace MortarWormEnemyDeath
} // namespace app::classes::types
