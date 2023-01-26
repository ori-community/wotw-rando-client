#pragma once
#include <Modloader/app/structs/GrantCharacterToUserResult.h>
#include <Modloader/app/structs/GrantCharacterToUserResult__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GrantCharacterToUserResult {
        inline app::GrantCharacterToUserResult__Class** type_info() {
            static app::GrantCharacterToUserResult__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GrantCharacterToUserResult__Class**)(modloader::win::memory::resolve_rva(0x04724630));
            }
            return cache;
        }
        inline app::GrantCharacterToUserResult__Class* get_class() {
            return il2cpp::get_class<app::GrantCharacterToUserResult__Class>(type_info(), "PlayFab.ClientModels", "GrantCharacterToUserResult");
        }
        inline app::GrantCharacterToUserResult* create() {
            return il2cpp::create_object<app::GrantCharacterToUserResult>(get_class());
        }
    } // namespace GrantCharacterToUserResult
} // namespace app::classes::types
