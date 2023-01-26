#pragma once
#include <Modloader/app/structs/SpitterEnemySpiritLeashedState.h>
#include <Modloader/app/structs/SpitterEnemySpiritLeashedState__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpitterEnemySpiritLeashedState {
        inline app::SpitterEnemySpiritLeashedState__Class** type_info() {
            static app::SpitterEnemySpiritLeashedState__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SpitterEnemySpiritLeashedState__Class**)(modloader::win::memory::resolve_rva(0x0478DF08));
            }
            return cache;
        }
        inline app::SpitterEnemySpiritLeashedState__Class* get_class() {
            return il2cpp::get_class<app::SpitterEnemySpiritLeashedState__Class>(type_info(), "", "SpitterEnemySpiritLeashedState");
        }
        inline app::SpitterEnemySpiritLeashedState* create() {
            return il2cpp::create_object<app::SpitterEnemySpiritLeashedState>(get_class());
        }
    } // namespace SpitterEnemySpiritLeashedState
} // namespace app::classes::types
