#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/CollisionTriggerSetupHolder__Class.h>
#include <Modloader/app/structs/CollisionTriggerSetupHolder.h>

namespace app::classes::types {
    namespace CollisionTriggerSetupHolder {
        namespace {
            inline app::CollisionTriggerSetupHolder__Class* type_info_ref = nullptr;
        }
        inline app::CollisionTriggerSetupHolder__Class** type_info = &type_info_ref;
        inline app::CollisionTriggerSetupHolder__Class* get_class() {
            return il2cpp::get_class<app::CollisionTriggerSetupHolder__Class>(type_info, "", "CollisionTriggerSetupHolder");
        }
        inline app::CollisionTriggerSetupHolder* create() {
            return il2cpp::create_object<app::CollisionTriggerSetupHolder>(get_class());
        }
    } // namespace CollisionTriggerSetupHolder
} // namespace app::classes::types
