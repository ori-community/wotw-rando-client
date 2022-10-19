#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SpawnPrefabAction {
        namespace {
            inline app::SpawnPrefabAction__Class* type_info_ref = nullptr;
        }
        inline app::SpawnPrefabAction__Class** type_info = &type_info_ref;
        inline app::SpawnPrefabAction__Class* get_class() {
            return il2cpp::get_class<app::SpawnPrefabAction__Class>(type_info, "", "SpawnPrefabAction");
        }
        inline app::SpawnPrefabAction* create() {
            return il2cpp::create_object<app::SpawnPrefabAction>(get_class());
        }
    } // namespace SpawnPrefabAction
} // namespace app::classes::types
