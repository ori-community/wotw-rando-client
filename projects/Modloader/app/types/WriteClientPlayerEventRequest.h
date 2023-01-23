#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/WriteClientPlayerEventRequest__Class.h>
#include <Modloader/app/structs/WriteClientPlayerEventRequest.h>

namespace app::classes::types {
    namespace WriteClientPlayerEventRequest {
        inline app::WriteClientPlayerEventRequest__Class** type_info = (app::WriteClientPlayerEventRequest__Class**)(modloader::win::memory::resolve_rva(0x04742CB0));
        inline app::WriteClientPlayerEventRequest__Class* get_class() {
            return il2cpp::get_class<app::WriteClientPlayerEventRequest__Class>(type_info, "PlayFab.ClientModels", "WriteClientPlayerEventRequest");
        }
        inline app::WriteClientPlayerEventRequest* create() {
            return il2cpp::create_object<app::WriteClientPlayerEventRequest>(get_class());
        }
    } // namespace WriteClientPlayerEventRequest
} // namespace app::classes::types
