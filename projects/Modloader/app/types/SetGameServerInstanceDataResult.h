#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SetGameServerInstanceDataResult__Class.h>
#include <Modloader/app/structs/SetGameServerInstanceDataResult.h>

namespace app::classes::types {
    namespace SetGameServerInstanceDataResult {
        inline app::SetGameServerInstanceDataResult__Class** type_info = (app::SetGameServerInstanceDataResult__Class**)(modloader::win::memory::resolve_rva(0x0475D780));
        inline app::SetGameServerInstanceDataResult__Class* get_class() {
            return il2cpp::get_class<app::SetGameServerInstanceDataResult__Class>(type_info, "PlayFab.ServerModels", "SetGameServerInstanceDataResult");
        }
        inline app::SetGameServerInstanceDataResult* create() {
            return il2cpp::create_object<app::SetGameServerInstanceDataResult>(get_class());
        }
    } // namespace SetGameServerInstanceDataResult
} // namespace app::classes::types
