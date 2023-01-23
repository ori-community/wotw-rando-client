#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/BlockEntityRequest__Class.h>
#include <Modloader/app/structs/BlockEntityRequest.h>

namespace app::classes::types {
    namespace BlockEntityRequest {
        inline app::BlockEntityRequest__Class** type_info = (app::BlockEntityRequest__Class**)(modloader::win::memory::resolve_rva(0x0472CF90));
        inline app::BlockEntityRequest__Class* get_class() {
            return il2cpp::get_class<app::BlockEntityRequest__Class>(type_info, "PlayFab.GroupsModels", "BlockEntityRequest");
        }
        inline app::BlockEntityRequest* create() {
            return il2cpp::create_object<app::BlockEntityRequest>(get_class());
        }
    } // namespace BlockEntityRequest
} // namespace app::classes::types
