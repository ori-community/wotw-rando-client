#pragma once
#include <Modloader/app/structs/SetGameServerInstanceStateResult.h>
#include <Modloader/app/structs/SetGameServerInstanceStateResult__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SetGameServerInstanceStateResult {
        inline app::SetGameServerInstanceStateResult__Class** type_info() {
            static app::SetGameServerInstanceStateResult__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SetGameServerInstanceStateResult__Class**)(modloader::win::memory::resolve_rva(0x04707660));
            }
            return cache;
        }
        inline app::SetGameServerInstanceStateResult__Class* get_class() {
            return il2cpp::get_class<app::SetGameServerInstanceStateResult__Class>(type_info(), "PlayFab.ServerModels", "SetGameServerInstanceStateResult");
        }
        inline app::SetGameServerInstanceStateResult* create() {
            return il2cpp::create_object<app::SetGameServerInstanceStateResult>(get_class());
        }
    } // namespace SetGameServerInstanceStateResult
} // namespace app::classes::types
