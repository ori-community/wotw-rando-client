#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace KamikazeSootEnemyState {
        namespace {
            inline app::KamikazeSootEnemyState__Class* type_info_ref = nullptr;
        }
        inline app::KamikazeSootEnemyState__Class** type_info = &type_info_ref;
        inline app::KamikazeSootEnemyState__Class* get_class() {
            return il2cpp::get_class<app::KamikazeSootEnemyState__Class>(type_info, "", "KamikazeSootEnemyState");
        }
        inline app::KamikazeSootEnemyState* create() {
            return il2cpp::create_object<app::KamikazeSootEnemyState>(get_class());
        }
    } // namespace KamikazeSootEnemyState
} // namespace app::classes::types
