#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ServerSpawnOnKill {
        namespace {
            app::ServerSpawnOnKill__Class* type_info_ref = nullptr;
        }
        app::ServerSpawnOnKill__Class** type_info = &type_info_ref;
        inline app::ServerSpawnOnKill__Class* get_class() {
            return il2cpp::get_class<app::ServerSpawnOnKill__Class>(type_info, "", "ServerSpawnOnKill");
        }
        inline app::ServerSpawnOnKill* create() {
            return il2cpp::create_object<app::ServerSpawnOnKill>(get_class());
        }
    } // namespace ServerSpawnOnKill
} // namespace app::classes::types
