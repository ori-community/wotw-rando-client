#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SpawnEntityAction__Class.h>
#include <Modloader/app/structs/SpawnEntityAction.h>

namespace app::classes::types {
    namespace SpawnEntityAction {
        namespace {
            inline app::SpawnEntityAction__Class* type_info_ref = nullptr;
        }
        inline app::SpawnEntityAction__Class** type_info = &type_info_ref;
        inline app::SpawnEntityAction__Class* get_class() {
            return il2cpp::get_class<app::SpawnEntityAction__Class>(type_info, "", "SpawnEntityAction");
        }
        inline app::SpawnEntityAction* create() {
            return il2cpp::create_object<app::SpawnEntityAction>(get_class());
        }
    } // namespace SpawnEntityAction
} // namespace app::classes::types
