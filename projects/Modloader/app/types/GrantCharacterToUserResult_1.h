#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/GrantCharacterToUserResult_1__Class.h>
#include <Modloader/app/structs/GrantCharacterToUserResult_1.h>

namespace app::classes::types {
    namespace GrantCharacterToUserResult_1 {
        inline app::GrantCharacterToUserResult_1__Class** type_info = (app::GrantCharacterToUserResult_1__Class**)(modloader::win::memory::resolve_rva(0x0472B9A8));
        inline app::GrantCharacterToUserResult_1__Class* get_class() {
            return il2cpp::get_class<app::GrantCharacterToUserResult_1__Class>(type_info, "PlayFab.ServerModels", "GrantCharacterToUserResult");
        }
        inline app::GrantCharacterToUserResult_1* create() {
            return il2cpp::create_object<app::GrantCharacterToUserResult_1>(get_class());
        }
    } // namespace GrantCharacterToUserResult_1
} // namespace app::classes::types
