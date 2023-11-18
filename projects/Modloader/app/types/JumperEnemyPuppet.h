#pragma once
#include <Modloader/app/structs/JumperEnemyPuppet.h>
#include <Modloader/app/structs/JumperEnemyPuppet__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace JumperEnemyPuppet {
        inline app::JumperEnemyPuppet__Class** type_info() {
            static app::JumperEnemyPuppet__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::JumperEnemyPuppet__Class**)(modloader::win::memory::resolve_rva(0x04794348));
            }
            return cache;
        }
        inline app::JumperEnemyPuppet__Class* get_class() {
            return il2cpp::get_class<app::JumperEnemyPuppet__Class>(type_info(), "", "JumperEnemyPuppet");
        }
        inline app::JumperEnemyPuppet* create() {
            return il2cpp::create_object<app::JumperEnemyPuppet>(get_class());
        }
    } // namespace JumperEnemyPuppet
} // namespace app::classes::types
