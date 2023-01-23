#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/LinkKongregateAccountResult__Class.h>
#include <Modloader/app/structs/LinkKongregateAccountResult.h>

namespace app::classes::types {
    namespace LinkKongregateAccountResult {
        inline app::LinkKongregateAccountResult__Class** type_info = (app::LinkKongregateAccountResult__Class**)(modloader::win::memory::resolve_rva(0x04778068));
        inline app::LinkKongregateAccountResult__Class* get_class() {
            return il2cpp::get_class<app::LinkKongregateAccountResult__Class>(type_info, "PlayFab.ClientModels", "LinkKongregateAccountResult");
        }
        inline app::LinkKongregateAccountResult* create() {
            return il2cpp::create_object<app::LinkKongregateAccountResult>(get_class());
        }
    } // namespace LinkKongregateAccountResult
} // namespace app::classes::types
