#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/JumperEnemyPuppet__Class.h>
#include <Modloader/app/structs/JumperEnemyPuppet.h>

namespace app::classes::types {
    namespace JumperEnemyPuppet {
        inline app::JumperEnemyPuppet__Class** type_info = (app::JumperEnemyPuppet__Class**)(modloader::win::memory::resolve_rva(0x04794348));
        inline app::JumperEnemyPuppet__Class* get_class() {
            return il2cpp::get_class<app::JumperEnemyPuppet__Class>(type_info, "", "JumperEnemyPuppet");
        }
        inline app::JumperEnemyPuppet* create() {
            return il2cpp::create_object<app::JumperEnemyPuppet>(get_class());
        }
    } // namespace JumperEnemyPuppet
} // namespace app::classes::types
