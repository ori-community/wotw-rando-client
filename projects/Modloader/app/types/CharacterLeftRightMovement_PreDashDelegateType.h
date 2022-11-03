#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace CharacterLeftRightMovement_PreDashDelegateType {
        inline app::CharacterLeftRightMovement_PreDashDelegateType__Class** type_info = (app::CharacterLeftRightMovement_PreDashDelegateType__Class**)(modloader::win::memory::resolve_rva(0x0470A6B0));
        inline app::CharacterLeftRightMovement_PreDashDelegateType__Class* get_class() {
            return il2cpp::get_nested_class<app::CharacterLeftRightMovement_PreDashDelegateType__Class>(type_info, "", "CharacterLeftRightMovement", "PreDashDelegateType");
        }
        inline app::CharacterLeftRightMovement_PreDashDelegateType* create() {
            return il2cpp::create_object<app::CharacterLeftRightMovement_PreDashDelegateType>(get_class());
        }
    } // namespace CharacterLeftRightMovement_PreDashDelegateType
} // namespace app::classes::types
