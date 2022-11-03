#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace RemoveGenericIDRequest {
        inline app::RemoveGenericIDRequest__Class** type_info = (app::RemoveGenericIDRequest__Class**)(modloader::win::memory::resolve_rva(0x047963E8));
        inline app::RemoveGenericIDRequest__Class* get_class() {
            return il2cpp::get_class<app::RemoveGenericIDRequest__Class>(type_info, "PlayFab.ClientModels", "RemoveGenericIDRequest");
        }
        inline app::RemoveGenericIDRequest* create() {
            return il2cpp::create_object<app::RemoveGenericIDRequest>(get_class());
        }
    } // namespace RemoveGenericIDRequest
} // namespace app::classes::types
