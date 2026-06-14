#pragma once
#include <Modloader/app/structs/GameWorld.h>
#include <Modloader/app/structs/GameWorld__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GameWorld {
        inline app::GameWorld__Class** type_info() {
            static app::GameWorld__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GameWorld__Class**)(modloader::win::memory::resolve_rva(0x04783850));
            }
            return cache;
        }
        inline app::GameWorld__Class* get_class() {
            return il2cpp::get_class<app::GameWorld__Class>(type_info(), "", "GameWorld");
        }
        inline app::GameWorld* create() {
            return il2cpp::create_object<app::GameWorld>(get_class());
        }
    } // namespace GameWorld
} // namespace app::classes::types
