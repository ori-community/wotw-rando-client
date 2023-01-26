#pragma once
#include <Modloader/app/structs/GrantCharacterToUserRequest_1.h>
#include <Modloader/app/structs/GrantCharacterToUserRequest_1__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GrantCharacterToUserRequest_1 {
        inline app::GrantCharacterToUserRequest_1__Class** type_info() {
            static app::GrantCharacterToUserRequest_1__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GrantCharacterToUserRequest_1__Class**)(modloader::win::memory::resolve_rva(0x0478F318));
            }
            return cache;
        }
        inline app::GrantCharacterToUserRequest_1__Class* get_class() {
            return il2cpp::get_class<app::GrantCharacterToUserRequest_1__Class>(type_info(), "PlayFab.ServerModels", "GrantCharacterToUserRequest");
        }
        inline app::GrantCharacterToUserRequest_1* create() {
            return il2cpp::create_object<app::GrantCharacterToUserRequest_1>(get_class());
        }
    } // namespace GrantCharacterToUserRequest_1
} // namespace app::classes::types
