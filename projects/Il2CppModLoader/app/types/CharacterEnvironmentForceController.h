#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

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
