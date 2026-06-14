#pragma once
#include <Modloader/app/structs/UpdateSharedGroupDataResult.h>
#include <Modloader/app/structs/UpdateSharedGroupDataResult__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UpdateSharedGroupDataResult {
        inline app::UpdateSharedGroupDataResult__Class** type_info() {
            static app::UpdateSharedGroupDataResult__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UpdateSharedGroupDataResult__Class**)(modloader::win::memory::resolve_rva(0x04736D48));
            }
            return cache;
        }
        inline app::UpdateSharedGroupDataResult__Class* get_class() {
            return il2cpp::get_class<app::UpdateSharedGroupDataResult__Class>(type_info(), "PlayFab.ClientModels", "UpdateSharedGroupDataResult");
        }
        inline app::UpdateSharedGroupDataResult* create() {
            return il2cpp::create_object<app::UpdateSharedGroupDataResult>(get_class());
        }
    } // namespace UpdateSharedGroupDataResult
} // namespace app::classes::types
