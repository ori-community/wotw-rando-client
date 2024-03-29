#pragma once
#include <Modloader/app/structs/KamikazeSootEnemyDropState.h>
#include <Modloader/app/structs/KamikazeSootEnemyDropState__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace KamikazeSootEnemyDropState {
        inline app::KamikazeSootEnemyDropState__Class** type_info() {
            static app::KamikazeSootEnemyDropState__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::KamikazeSootEnemyDropState__Class**)(modloader::win::memory::resolve_rva(0x047157C8));
            }
            return cache;
        }
        inline app::KamikazeSootEnemyDropState__Class* get_class() {
            return il2cpp::get_class<app::KamikazeSootEnemyDropState__Class>(type_info(), "", "KamikazeSootEnemyDropState");
        }
        inline app::KamikazeSootEnemyDropState* create() {
            return il2cpp::create_object<app::KamikazeSootEnemyDropState>(get_class());
        }
    } // namespace KamikazeSootEnemyDropState
} // namespace app::classes::types
