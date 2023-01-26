#pragma once
#include <Modloader/app/structs/WorldState__Enum.h>
#include <Modloader/app/structs/WorldState__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WorldState__Enum {
        inline app::WorldState__Enum__Class** type_info() {
            static app::WorldState__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::WorldState__Enum__Class**)(modloader::win::memory::resolve_rva(0x04730FB0));
            }
            return cache;
        }
        inline app::WorldState__Enum__Class* get_class() {
            return il2cpp::get_class<app::WorldState__Enum__Class>(type_info(), "", "WorldState");
        }
        inline app::WorldState__Enum* create() {
            return il2cpp::create_object<app::WorldState__Enum>(get_class());
        }
    } // namespace WorldState__Enum
} // namespace app::classes::types
