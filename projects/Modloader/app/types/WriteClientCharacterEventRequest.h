#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace WriteClientCharacterEventRequest {
        inline app::WriteClientCharacterEventRequest__Class** type_info = (app::WriteClientCharacterEventRequest__Class**)(modloader::win::memory::resolve_rva(0x04758D50));
        inline app::WriteClientCharacterEventRequest__Class* get_class() {
            return il2cpp::get_class<app::WriteClientCharacterEventRequest__Class>(type_info, "PlayFab.ClientModels", "WriteClientCharacterEventRequest");
        }
        inline app::WriteClientCharacterEventRequest* create() {
            return il2cpp::create_object<app::WriteClientCharacterEventRequest>(get_class());
        }
    } // namespace WriteClientCharacterEventRequest
} // namespace app::classes::types
