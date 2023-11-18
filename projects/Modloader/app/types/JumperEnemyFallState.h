#pragma once
#include <Modloader/app/structs/JumperEnemyFallState.h>
#include <Modloader/app/structs/JumperEnemyFallState__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace JumperEnemyFallState {
        inline app::JumperEnemyFallState__Class** type_info() {
            static app::JumperEnemyFallState__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::JumperEnemyFallState__Class**)(modloader::win::memory::resolve_rva(0x04704D70));
            }
            return cache;
        }
        inline app::JumperEnemyFallState__Class* get_class() {
            return il2cpp::get_class<app::JumperEnemyFallState__Class>(type_info(), "", "JumperEnemyFallState");
        }
        inline app::JumperEnemyFallState* create() {
            return il2cpp::create_object<app::JumperEnemyFallState>(get_class());
        }
    } // namespace JumperEnemyFallState
} // namespace app::classes::types
