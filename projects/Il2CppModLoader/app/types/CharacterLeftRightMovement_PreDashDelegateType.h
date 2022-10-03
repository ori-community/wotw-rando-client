#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CharacterLeftRightMovement_PreDashDelegateType {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CharacterLeftRightMovement_PreDashDelegateType__Class** type_info;
        inline app::CharacterLeftRightMovement_PreDashDelegateType__Class* get_class() {
            return il2cpp::get_nested_class<app::CharacterLeftRightMovement_PreDashDelegateType__Class>(type_info, "", "CharacterLeftRightMovement", "PreDashDelegateType");
        }
        inline app::CharacterLeftRightMovement_PreDashDelegateType* create() {
            return il2cpp::create_object<app::CharacterLeftRightMovement_PreDashDelegateType>(get_class());
        }
    } // namespace CharacterLeftRightMovement_PreDashDelegateType
} // namespace app::classes::types
