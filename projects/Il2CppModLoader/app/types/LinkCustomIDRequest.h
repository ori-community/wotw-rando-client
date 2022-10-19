#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace LinkCustomIDRequest {
        inline app::LinkCustomIDRequest__Class** type_info = (app::LinkCustomIDRequest__Class**)(modloader::win::memory::resolve_rva(0x047391B0));
        inline app::LinkCustomIDRequest__Class* get_class() {
            return il2cpp::get_class<app::LinkCustomIDRequest__Class>(type_info, "PlayFab.ClientModels", "LinkCustomIDRequest");
        }
        inline app::LinkCustomIDRequest* create() {
            return il2cpp::create_object<app::LinkCustomIDRequest>(get_class());
        }
    } // namespace LinkCustomIDRequest
} // namespace app::classes::types
