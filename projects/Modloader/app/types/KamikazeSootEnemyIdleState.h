#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace KamikazeSootEnemyIdleState {
        inline app::KamikazeSootEnemyIdleState__Class** type_info = (app::KamikazeSootEnemyIdleState__Class**)(modloader::win::memory::resolve_rva(0x04715580));
        inline app::KamikazeSootEnemyIdleState__Class* get_class() {
            return il2cpp::get_class<app::KamikazeSootEnemyIdleState__Class>(type_info, "", "KamikazeSootEnemyIdleState");
        }
        inline app::KamikazeSootEnemyIdleState* create() {
            return il2cpp::create_object<app::KamikazeSootEnemyIdleState>(get_class());
        }
    } // namespace KamikazeSootEnemyIdleState
} // namespace app::classes::types
