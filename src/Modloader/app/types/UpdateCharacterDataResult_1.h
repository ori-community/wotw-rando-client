#pragma once
#include <Modloader/app/structs/UpdateCharacterDataResult_1.h>
#include <Modloader/app/structs/UpdateCharacterDataResult_1__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UpdateCharacterDataResult_1 {
        inline app::UpdateCharacterDataResult_1__Class** type_info() {
            static app::UpdateCharacterDataResult_1__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UpdateCharacterDataResult_1__Class**)(modloader::win::memory::resolve_rva(0x0470B738));
            }
            return cache;
        }
        inline app::UpdateCharacterDataResult_1__Class* get_class() {
            return il2cpp::get_class<app::UpdateCharacterDataResult_1__Class>(type_info(), "PlayFab.ServerModels", "UpdateCharacterDataResult");
        }
        inline app::UpdateCharacterDataResult_1* create() {
            return il2cpp::create_object<app::UpdateCharacterDataResult_1>(get_class());
        }
    } // namespace UpdateCharacterDataResult_1
} // namespace app::classes::types
