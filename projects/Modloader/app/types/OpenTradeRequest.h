#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/OpenTradeRequest__Class.h>
#include <Modloader/app/structs/OpenTradeRequest.h>

namespace app::classes::types {
    namespace OpenTradeRequest {
        inline app::OpenTradeRequest__Class** type_info = (app::OpenTradeRequest__Class**)(modloader::win::memory::resolve_rva(0x04774718));
        inline app::OpenTradeRequest__Class* get_class() {
            return il2cpp::get_class<app::OpenTradeRequest__Class>(type_info, "PlayFab.ClientModels", "OpenTradeRequest");
        }
        inline app::OpenTradeRequest* create() {
            return il2cpp::create_object<app::OpenTradeRequest>(get_class());
        }
    } // namespace OpenTradeRequest
} // namespace app::classes::types
