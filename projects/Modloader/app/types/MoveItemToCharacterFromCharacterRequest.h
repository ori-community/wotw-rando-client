#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/MoveItemToCharacterFromCharacterRequest__Class.h>
#include <Modloader/app/structs/MoveItemToCharacterFromCharacterRequest.h>

namespace app::classes::types {
    namespace MoveItemToCharacterFromCharacterRequest {
        inline app::MoveItemToCharacterFromCharacterRequest__Class** type_info = (app::MoveItemToCharacterFromCharacterRequest__Class**)(modloader::win::memory::resolve_rva(0x04770008));
        inline app::MoveItemToCharacterFromCharacterRequest__Class* get_class() {
            return il2cpp::get_class<app::MoveItemToCharacterFromCharacterRequest__Class>(type_info, "PlayFab.ServerModels", "MoveItemToCharacterFromCharacterRequest");
        }
        inline app::MoveItemToCharacterFromCharacterRequest* create() {
            return il2cpp::create_object<app::MoveItemToCharacterFromCharacterRequest>(get_class());
        }
    } // namespace MoveItemToCharacterFromCharacterRequest
} // namespace app::classes::types
