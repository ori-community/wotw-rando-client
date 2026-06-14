#pragma once
#include <Modloader/app/structs/AllEnemiesKilledTrigger.h>
#include <Modloader/app/structs/AllEnemiesKilledTrigger__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AllEnemiesKilledTrigger {
        inline app::AllEnemiesKilledTrigger__Class** type_info() {
            static app::AllEnemiesKilledTrigger__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AllEnemiesKilledTrigger__Class**)(modloader::win::memory::resolve_rva(0x047560E8));
            }
            return cache;
        }
        inline app::AllEnemiesKilledTrigger__Class* get_class() {
            return il2cpp::get_class<app::AllEnemiesKilledTrigger__Class>(type_info(), "", "AllEnemiesKilledTrigger");
        }
        inline app::AllEnemiesKilledTrigger* create() {
            return il2cpp::create_object<app::AllEnemiesKilledTrigger>(get_class());
        }
    } // namespace AllEnemiesKilledTrigger
} // namespace app::classes::types
