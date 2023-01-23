#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ServerLoginResult__Class.h>
#include <Modloader/app/structs/ServerLoginResult.h>

namespace app::classes::types {
    namespace ServerLoginResult {
        inline app::ServerLoginResult__Class** type_info = (app::ServerLoginResult__Class**)(modloader::win::memory::resolve_rva(0x04781550));
        inline app::ServerLoginResult__Class* get_class() {
            return il2cpp::get_class<app::ServerLoginResult__Class>(type_info, "PlayFab.ServerModels", "ServerLoginResult");
        }
        inline app::ServerLoginResult* create() {
            return il2cpp::create_object<app::ServerLoginResult>(get_class());
        }
    } // namespace ServerLoginResult
} // namespace app::classes::types
