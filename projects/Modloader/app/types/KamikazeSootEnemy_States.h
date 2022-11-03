#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace KamikazeSootEnemy_States {
        inline app::KamikazeSootEnemy_States__Class** type_info = (app::KamikazeSootEnemy_States__Class**)(modloader::win::memory::resolve_rva(0x0476EE98));
        inline app::KamikazeSootEnemy_States__Class* get_class() {
            return il2cpp::get_nested_class<app::KamikazeSootEnemy_States__Class>(type_info, "", "KamikazeSootEnemy", "States");
        }
        inline app::KamikazeSootEnemy_States* create() {
            return il2cpp::create_object<app::KamikazeSootEnemy_States>(get_class());
        }
    } // namespace KamikazeSootEnemy_States
} // namespace app::classes::types
