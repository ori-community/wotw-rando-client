#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/CharacterEnvironmentForceController__Class.h>
#include <Modloader/app/structs/CharacterEnvironmentForceController.h>

namespace app::classes::types {
    namespace CharacterEnvironmentForceController {
        namespace {
            inline app::CharacterEnvironmentForceController__Class* type_info_ref = nullptr;
        }
        inline app::CharacterEnvironmentForceController__Class** type_info = &type_info_ref;
        inline app::CharacterEnvironmentForceController__Class* get_class() {
            return il2cpp::get_class<app::CharacterEnvironmentForceController__Class>(type_info, "", "CharacterEnvironmentForceController");
        }
        inline app::CharacterEnvironmentForceController* create() {
            return il2cpp::create_object<app::CharacterEnvironmentForceController>(get_class());
        }
    } // namespace CharacterEnvironmentForceController
} // namespace app::classes::types
