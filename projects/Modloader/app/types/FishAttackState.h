#pragma once
#include <Modloader/app/structs/FishAttackState.h>
#include <Modloader/app/structs/FishAttackState__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FishAttackState {
        inline app::FishAttackState__Class** type_info() {
            static app::FishAttackState__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::FishAttackState__Class**)(modloader::win::memory::resolve_rva(0x04709300));
            }
            return cache;
        }
        inline app::FishAttackState__Class* get_class() {
            return il2cpp::get_class<app::FishAttackState__Class>(type_info(), "", "FishAttackState");
        }
        inline app::FishAttackState* create() {
            return il2cpp::create_object<app::FishAttackState>(get_class());
        }
    } // namespace FishAttackState
} // namespace app::classes::types
