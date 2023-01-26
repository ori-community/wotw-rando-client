#pragma once
#include <Modloader/app/structs/UnlinkKongregateAccountResult.h>
#include <Modloader/app/structs/UnlinkKongregateAccountResult__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UnlinkKongregateAccountResult {
        inline app::UnlinkKongregateAccountResult__Class** type_info() {
            static app::UnlinkKongregateAccountResult__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UnlinkKongregateAccountResult__Class**)(modloader::win::memory::resolve_rva(0x047939C8));
            }
            return cache;
        }
        inline app::UnlinkKongregateAccountResult__Class* get_class() {
            return il2cpp::get_class<app::UnlinkKongregateAccountResult__Class>(type_info(), "PlayFab.ClientModels", "UnlinkKongregateAccountResult");
        }
        inline app::UnlinkKongregateAccountResult* create() {
            return il2cpp::create_object<app::UnlinkKongregateAccountResult>(get_class());
        }
    } // namespace UnlinkKongregateAccountResult
} // namespace app::classes::types
