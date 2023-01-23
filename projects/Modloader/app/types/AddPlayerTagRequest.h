#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/AddPlayerTagRequest__Class.h>
#include <Modloader/app/structs/AddPlayerTagRequest.h>

namespace app::classes::types {
    namespace AddPlayerTagRequest {
        inline app::AddPlayerTagRequest__Class** type_info = (app::AddPlayerTagRequest__Class**)(modloader::win::memory::resolve_rva(0x04720020));
        inline app::AddPlayerTagRequest__Class* get_class() {
            return il2cpp::get_class<app::AddPlayerTagRequest__Class>(type_info, "PlayFab.ServerModels", "AddPlayerTagRequest");
        }
        inline app::AddPlayerTagRequest* create() {
            return il2cpp::create_object<app::AddPlayerTagRequest>(get_class());
        }
    } // namespace AddPlayerTagRequest
} // namespace app::classes::types
