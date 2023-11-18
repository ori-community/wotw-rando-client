#pragma once
#include <Modloader/app/structs/ServerSpawnOnKill.h>
#include <Modloader/app/structs/ServerSpawnOnKill__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ServerSpawnOnKill {
        inline app::ServerSpawnOnKill__Class** type_info() {
            static app::ServerSpawnOnKill__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ServerSpawnOnKill__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ServerSpawnOnKill__Class* get_class() {
            return il2cpp::get_class<app::ServerSpawnOnKill__Class>(type_info(), "", "ServerSpawnOnKill");
        }
        inline app::ServerSpawnOnKill* create() {
            return il2cpp::create_object<app::ServerSpawnOnKill>(get_class());
        }
    } // namespace ServerSpawnOnKill
} // namespace app::classes::types
