#pragma once
#include <Modloader/app/structs/UpdateCharacterDataResult.h>
#include <Modloader/app/structs/UpdateCharacterDataResult__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UpdateCharacterDataResult {
        inline app::UpdateCharacterDataResult__Class** type_info() {
            static app::UpdateCharacterDataResult__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UpdateCharacterDataResult__Class**)(modloader::win::memory::resolve_rva(0x047356B0));
            }
            return cache;
        }
        inline app::UpdateCharacterDataResult__Class* get_class() {
            return il2cpp::get_class<app::UpdateCharacterDataResult__Class>(type_info(), "PlayFab.ClientModels", "UpdateCharacterDataResult");
        }
        inline app::UpdateCharacterDataResult* create() {
            return il2cpp::create_object<app::UpdateCharacterDataResult>(get_class());
        }
    } // namespace UpdateCharacterDataResult
} // namespace app::classes::types
