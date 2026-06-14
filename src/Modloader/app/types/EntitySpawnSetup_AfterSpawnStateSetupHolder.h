#pragma once
#include <Modloader/app/structs/EntitySpawnSetup_AfterSpawnStateSetupHolder.h>
#include <Modloader/app/structs/EntitySpawnSetup_AfterSpawnStateSetupHolder__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EntitySpawnSetup_AfterSpawnStateSetupHolder {
        inline app::EntitySpawnSetup_AfterSpawnStateSetupHolder__Class** type_info() {
            static app::EntitySpawnSetup_AfterSpawnStateSetupHolder__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EntitySpawnSetup_AfterSpawnStateSetupHolder__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EntitySpawnSetup_AfterSpawnStateSetupHolder__Class* get_class() {
            return il2cpp::get_nested_class<app::EntitySpawnSetup_AfterSpawnStateSetupHolder__Class>(type_info(), "", "EntitySpawnSetup", "AfterSpawnStateSetupHolder");
        }
        inline app::EntitySpawnSetup_AfterSpawnStateSetupHolder* create() {
            return il2cpp::create_object<app::EntitySpawnSetup_AfterSpawnStateSetupHolder>(get_class());
        }
    } // namespace EntitySpawnSetup_AfterSpawnStateSetupHolder
} // namespace app::classes::types
