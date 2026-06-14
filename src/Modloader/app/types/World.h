#pragma once
#include <Modloader/app/structs/World.h>
#include <Modloader/app/structs/World__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace World {
        inline app::World__Class** type_info() {
            static app::World__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::World__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::World__Class* get_class() {
            return il2cpp::get_class<app::World__Class>(type_info(), "Game", "World");
        }
        inline app::World* create() {
            return il2cpp::create_object<app::World>(get_class());
        }
    } // namespace World
} // namespace app::classes::types
