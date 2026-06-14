#pragma once
#include <Modloader/app/structs/JumperEnemyThrownState.h>
#include <Modloader/app/structs/JumperEnemyThrownState__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace JumperEnemyThrownState {
        inline app::JumperEnemyThrownState__Class** type_info() {
            static app::JumperEnemyThrownState__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::JumperEnemyThrownState__Class**)(modloader::win::memory::resolve_rva(0x04779D80));
            }
            return cache;
        }
        inline app::JumperEnemyThrownState__Class* get_class() {
            return il2cpp::get_class<app::JumperEnemyThrownState__Class>(type_info(), "", "JumperEnemyThrownState");
        }
        inline app::JumperEnemyThrownState* create() {
            return il2cpp::create_object<app::JumperEnemyThrownState>(get_class());
        }
    } // namespace JumperEnemyThrownState
} // namespace app::classes::types
