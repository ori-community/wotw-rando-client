#pragma once
#include <Modloader/app/structs/UpdateUserTitleDisplayNameResult.h>
#include <Modloader/app/structs/UpdateUserTitleDisplayNameResult__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UpdateUserTitleDisplayNameResult {
        inline app::UpdateUserTitleDisplayNameResult__Class** type_info() {
            static app::UpdateUserTitleDisplayNameResult__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UpdateUserTitleDisplayNameResult__Class**)(modloader::win::memory::resolve_rva(0x04755EC0));
            }
            return cache;
        }
        inline app::UpdateUserTitleDisplayNameResult__Class* get_class() {
            return il2cpp::get_class<app::UpdateUserTitleDisplayNameResult__Class>(type_info(), "PlayFab.ClientModels", "UpdateUserTitleDisplayNameResult");
        }
        inline app::UpdateUserTitleDisplayNameResult* create() {
            return il2cpp::create_object<app::UpdateUserTitleDisplayNameResult>(get_class());
        }
    } // namespace UpdateUserTitleDisplayNameResult
} // namespace app::classes::types
