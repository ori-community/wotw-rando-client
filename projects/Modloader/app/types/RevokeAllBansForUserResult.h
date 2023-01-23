#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/RevokeAllBansForUserResult__Class.h>
#include <Modloader/app/structs/RevokeAllBansForUserResult.h>

namespace app::classes::types {
    namespace RevokeAllBansForUserResult {
        inline app::RevokeAllBansForUserResult__Class** type_info = (app::RevokeAllBansForUserResult__Class**)(modloader::win::memory::resolve_rva(0x0474B568));
        inline app::RevokeAllBansForUserResult__Class* get_class() {
            return il2cpp::get_class<app::RevokeAllBansForUserResult__Class>(type_info, "PlayFab.ServerModels", "RevokeAllBansForUserResult");
        }
        inline app::RevokeAllBansForUserResult* create() {
            return il2cpp::create_object<app::RevokeAllBansForUserResult>(get_class());
        }
    } // namespace RevokeAllBansForUserResult
} // namespace app::classes::types
