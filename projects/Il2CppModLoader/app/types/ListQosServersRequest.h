#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ListQosServersRequest {
        inline app::ListQosServersRequest__Class** type_info = (app::ListQosServersRequest__Class**)(modloader::win::memory::resolve_rva(0x0476DC48));
        inline app::ListQosServersRequest__Class* get_class() {
            return il2cpp::get_class<app::ListQosServersRequest__Class>(type_info, "PlayFab.MultiplayerModels", "ListQosServersRequest");
        }
        inline app::ListQosServersRequest* create() {
            return il2cpp::create_object<app::ListQosServersRequest>(get_class());
        }
    } // namespace ListQosServersRequest
} // namespace app::classes::types
