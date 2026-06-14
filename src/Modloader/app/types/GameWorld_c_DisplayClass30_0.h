#pragma once
#include <Modloader/app/structs/GameWorld_c_DisplayClass30_0.h>
#include <Modloader/app/structs/GameWorld_c_DisplayClass30_0__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GameWorld_c_DisplayClass30_0 {
        inline app::GameWorld_c_DisplayClass30_0__Class** type_info() {
            static app::GameWorld_c_DisplayClass30_0__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GameWorld_c_DisplayClass30_0__Class**)(modloader::win::memory::resolve_rva(0x04778AE0));
            }
            return cache;
        }
        inline app::GameWorld_c_DisplayClass30_0__Class* get_class() {
            return il2cpp::get_nested_class<app::GameWorld_c_DisplayClass30_0__Class>(type_info(), "", "GameWorld", "<>c__DisplayClass30_0");
        }
        inline app::GameWorld_c_DisplayClass30_0* create() {
            return il2cpp::create_object<app::GameWorld_c_DisplayClass30_0>(get_class());
        }
    } // namespace GameWorld_c_DisplayClass30_0
} // namespace app::classes::types
