#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/GameWorld__Class.h>
#include <Modloader/app/structs/GameWorld.h>

namespace app::classes::types {
    namespace GameWorld {
        inline app::GameWorld__Class** type_info = (app::GameWorld__Class**)(modloader::win::memory::resolve_rva(0x04783850));
        inline app::GameWorld__Class* get_class() {
            return il2cpp::get_class<app::GameWorld__Class>(type_info, "", "GameWorld");
        }
        inline app::GameWorld* create() {
            return il2cpp::create_object<app::GameWorld>(get_class());
        }
    } // namespace GameWorld
} // namespace app::classes::types
