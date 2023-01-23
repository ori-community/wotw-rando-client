#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SpawnProjectileAction__Class.h>
#include <Modloader/app/structs/SpawnProjectileAction.h>

namespace app::classes::types {
    namespace SpawnProjectileAction {
        namespace {
            inline app::SpawnProjectileAction__Class* type_info_ref = nullptr;
        }
        inline app::SpawnProjectileAction__Class** type_info = &type_info_ref;
        inline app::SpawnProjectileAction__Class* get_class() {
            return il2cpp::get_class<app::SpawnProjectileAction__Class>(type_info, "", "SpawnProjectileAction");
        }
        inline app::SpawnProjectileAction* create() {
            return il2cpp::create_object<app::SpawnProjectileAction>(get_class());
        }
    } // namespace SpawnProjectileAction
} // namespace app::classes::types
