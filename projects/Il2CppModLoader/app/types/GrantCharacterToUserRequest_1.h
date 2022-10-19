#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace GrantCharacterToUserRequest_1 {
        inline app::GrantCharacterToUserRequest_1__Class** type_info = (app::GrantCharacterToUserRequest_1__Class**)(modloader::win::memory::resolve_rva(0x0478F318));
        inline app::GrantCharacterToUserRequest_1__Class* get_class() {
            return il2cpp::get_class<app::GrantCharacterToUserRequest_1__Class>(type_info, "PlayFab.ServerModels", "GrantCharacterToUserRequest");
        }
        inline app::GrantCharacterToUserRequest_1* create() {
            return il2cpp::create_object<app::GrantCharacterToUserRequest_1>(get_class());
        }
    } // namespace GrantCharacterToUserRequest_1
} // namespace app::classes::types
