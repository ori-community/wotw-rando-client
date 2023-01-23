#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/AddGenericIDRequest__Class.h>
#include <Modloader/app/structs/AddGenericIDRequest.h>

namespace app::classes::types {
    namespace AddGenericIDRequest {
        inline app::AddGenericIDRequest__Class** type_info = (app::AddGenericIDRequest__Class**)(modloader::win::memory::resolve_rva(0x04781768));
        inline app::AddGenericIDRequest__Class* get_class() {
            return il2cpp::get_class<app::AddGenericIDRequest__Class>(type_info, "PlayFab.ClientModels", "AddGenericIDRequest");
        }
        inline app::AddGenericIDRequest* create() {
            return il2cpp::create_object<app::AddGenericIDRequest>(get_class());
        }
    } // namespace AddGenericIDRequest
} // namespace app::classes::types
