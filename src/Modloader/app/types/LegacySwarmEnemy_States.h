#pragma once
#include <Modloader/app/structs/LegacySwarmEnemy_States.h>
#include <Modloader/app/structs/LegacySwarmEnemy_States__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LegacySwarmEnemy_States {
        inline app::LegacySwarmEnemy_States__Class** type_info() {
            static app::LegacySwarmEnemy_States__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::LegacySwarmEnemy_States__Class**)(modloader::win::memory::resolve_rva(0x0471C7C8));
            }
            return cache;
        }
        inline app::LegacySwarmEnemy_States__Class* get_class() {
            return il2cpp::get_nested_class<app::LegacySwarmEnemy_States__Class>(type_info(), "", "LegacySwarmEnemy", "States");
        }
        inline app::LegacySwarmEnemy_States* create() {
            return il2cpp::create_object<app::LegacySwarmEnemy_States>(get_class());
        }
    } // namespace LegacySwarmEnemy_States
} // namespace app::classes::types
