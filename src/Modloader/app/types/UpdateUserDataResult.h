#pragma once
#include <Modloader/app/structs/UpdateUserDataResult.h>
#include <Modloader/app/structs/UpdateUserDataResult__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UpdateUserDataResult {
        inline app::UpdateUserDataResult__Class** type_info() {
            static app::UpdateUserDataResult__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UpdateUserDataResult__Class**)(modloader::win::memory::resolve_rva(0x0475E398));
            }
            return cache;
        }
        inline app::UpdateUserDataResult__Class* get_class() {
            return il2cpp::get_class<app::UpdateUserDataResult__Class>(type_info(), "PlayFab.ClientModels", "UpdateUserDataResult");
        }
        inline app::UpdateUserDataResult* create() {
            return il2cpp::create_object<app::UpdateUserDataResult>(get_class());
        }
    } // namespace UpdateUserDataResult
} // namespace app::classes::types
