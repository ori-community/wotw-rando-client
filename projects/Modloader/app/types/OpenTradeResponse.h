#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/OpenTradeResponse__Class.h>
#include <Modloader/app/structs/OpenTradeResponse.h>

namespace app::classes::types {
    namespace OpenTradeResponse {
        inline app::OpenTradeResponse__Class** type_info = (app::OpenTradeResponse__Class**)(modloader::win::memory::resolve_rva(0x04785DF8));
        inline app::OpenTradeResponse__Class* get_class() {
            return il2cpp::get_class<app::OpenTradeResponse__Class>(type_info, "PlayFab.ClientModels", "OpenTradeResponse");
        }
        inline app::OpenTradeResponse* create() {
            return il2cpp::create_object<app::OpenTradeResponse>(get_class());
        }
    } // namespace OpenTradeResponse
} // namespace app::classes::types
