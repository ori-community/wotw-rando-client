#pragma once
#include <Modloader/app/structs/UpdateCharacterDataRequest_1.h>
#include <Modloader/app/structs/UpdateCharacterDataRequest_1__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UpdateCharacterDataRequest_1 {
        inline app::UpdateCharacterDataRequest_1__Class** type_info() {
            static app::UpdateCharacterDataRequest_1__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UpdateCharacterDataRequest_1__Class**)(modloader::win::memory::resolve_rva(0x04707DE0));
            }
            return cache;
        }
        inline app::UpdateCharacterDataRequest_1__Class* get_class() {
            return il2cpp::get_class<app::UpdateCharacterDataRequest_1__Class>(type_info(), "PlayFab.ServerModels", "UpdateCharacterDataRequest");
        }
        inline app::UpdateCharacterDataRequest_1* create() {
            return il2cpp::create_object<app::UpdateCharacterDataRequest_1>(get_class());
        }
    } // namespace UpdateCharacterDataRequest_1
} // namespace app::classes::types
