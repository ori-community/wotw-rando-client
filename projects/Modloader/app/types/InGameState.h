#pragma once
#include <Modloader/app/structs/InGameState.h>
#include <Modloader/app/structs/InGameState__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace InGameState {
        inline app::InGameState__Class** type_info() {
            static app::InGameState__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::InGameState__Class**)(modloader::win::memory::resolve_rva(0x04751BE0));
            }
            return cache;
        }
        inline app::InGameState__Class* get_class() {
            return il2cpp::get_class<app::InGameState__Class>(type_info(), "", "InGameState");
        }
        inline app::InGameState* create() {
            return il2cpp::create_object<app::InGameState>(get_class());
        }
    } // namespace InGameState
} // namespace app::classes::types
