#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SpawnProjectileAction {
        namespace {
            app::SpawnProjectileAction__Class* type_info_ref = nullptr;
        }
        app::SpawnProjectileAction__Class** type_info = &type_info_ref;
        inline app::SpawnProjectileAction__Class* get_class() {
            return il2cpp::get_class<app::SpawnProjectileAction__Class>(type_info, "", "SpawnProjectileAction");
        }
        inline app::SpawnProjectileAction* create() {
            return il2cpp::create_object<app::SpawnProjectileAction>(get_class());
        }
    } // namespace SpawnProjectileAction
} // namespace app::classes::types
