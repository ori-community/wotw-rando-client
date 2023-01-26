#pragma once
#include <Modloader/app/structs/DemoInGameState.h>
#include <Modloader/app/structs/DemoInGameState__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DemoInGameState {
        inline app::DemoInGameState__Class** type_info() {
            static app::DemoInGameState__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DemoInGameState__Class**)(modloader::win::memory::resolve_rva(0x04753330));
            }
            return cache;
        }
        inline app::DemoInGameState__Class* get_class() {
            return il2cpp::get_class<app::DemoInGameState__Class>(type_info(), "", "DemoInGameState");
        }
        inline app::DemoInGameState* create() {
            return il2cpp::create_object<app::DemoInGameState>(get_class());
        }
    } // namespace DemoInGameState
} // namespace app::classes::types
