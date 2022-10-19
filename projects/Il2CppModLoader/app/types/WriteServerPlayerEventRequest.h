#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace WriteServerPlayerEventRequest {
        inline app::WriteServerPlayerEventRequest__Class** type_info = (app::WriteServerPlayerEventRequest__Class**)(modloader::win::memory::resolve_rva(0x0473FF80));
        inline app::WriteServerPlayerEventRequest__Class* get_class() {
            return il2cpp::get_class<app::WriteServerPlayerEventRequest__Class>(type_info, "PlayFab.ServerModels", "WriteServerPlayerEventRequest");
        }
        inline app::WriteServerPlayerEventRequest* create() {
            return il2cpp::create_object<app::WriteServerPlayerEventRequest>(get_class());
        }
    } // namespace WriteServerPlayerEventRequest
} // namespace app::classes::types
