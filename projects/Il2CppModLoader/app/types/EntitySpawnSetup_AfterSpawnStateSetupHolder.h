#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace EntitySpawnSetup_AfterSpawnStateSetupHolder {
        namespace {
            inline app::EntitySpawnSetup_AfterSpawnStateSetupHolder__Class* type_info_ref = nullptr;
        }
        inline app::EntitySpawnSetup_AfterSpawnStateSetupHolder__Class** type_info = &type_info_ref;
        inline app::EntitySpawnSetup_AfterSpawnStateSetupHolder__Class* get_class() {
            return il2cpp::get_nested_class<app::EntitySpawnSetup_AfterSpawnStateSetupHolder__Class>(type_info, "", "EntitySpawnSetup", "AfterSpawnStateSetupHolder");
        }
        inline app::EntitySpawnSetup_AfterSpawnStateSetupHolder* create() {
            return il2cpp::create_object<app::EntitySpawnSetup_AfterSpawnStateSetupHolder>(get_class());
        }
    } // namespace EntitySpawnSetup_AfterSpawnStateSetupHolder
} // namespace app::classes::types
