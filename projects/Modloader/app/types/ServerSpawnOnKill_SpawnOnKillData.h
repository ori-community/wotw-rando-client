#pragma once
#include <Modloader/app/structs/ServerSpawnOnKill_SpawnOnKillData.h>
#include <Modloader/app/structs/ServerSpawnOnKill_SpawnOnKillData__Boxed.h>
#include <Modloader/app/structs/ServerSpawnOnKill_SpawnOnKillData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ServerSpawnOnKill_SpawnOnKillData {
        inline app::ServerSpawnOnKill_SpawnOnKillData__Class** type_info() {
            static app::ServerSpawnOnKill_SpawnOnKillData__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ServerSpawnOnKill_SpawnOnKillData__Class**)(modloader::win::memory::resolve_rva(0x04736B88));
            }
            return cache;
        }
        inline app::ServerSpawnOnKill_SpawnOnKillData__Class* get_class() {
            return il2cpp::get_nested_class<app::ServerSpawnOnKill_SpawnOnKillData__Class>(type_info(), "", "ServerSpawnOnKill", "SpawnOnKillData");
        }
        inline app::ServerSpawnOnKill_SpawnOnKillData* create() {
            return il2cpp::create_object<app::ServerSpawnOnKill_SpawnOnKillData>(get_class());
        }
        inline app::ServerSpawnOnKill_SpawnOnKillData__Boxed* box(app::ServerSpawnOnKill_SpawnOnKillData value) {
            return il2cpp::box_value<app::ServerSpawnOnKill_SpawnOnKillData__Boxed>(get_class(), value);
        }
    } // namespace ServerSpawnOnKill_SpawnOnKillData
} // namespace app::classes::types
