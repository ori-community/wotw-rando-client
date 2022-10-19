#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SetGameServerInstanceStateResult {
        inline app::SetGameServerInstanceStateResult__Class** type_info = (app::SetGameServerInstanceStateResult__Class**)(modloader::win::memory::resolve_rva(0x04707660));
        inline app::SetGameServerInstanceStateResult__Class* get_class() {
            return il2cpp::get_class<app::SetGameServerInstanceStateResult__Class>(type_info, "PlayFab.ServerModels", "SetGameServerInstanceStateResult");
        }
        inline app::SetGameServerInstanceStateResult* create() {
            return il2cpp::create_object<app::SetGameServerInstanceStateResult>(get_class());
        }
    } // namespace SetGameServerInstanceStateResult
} // namespace app::classes::types
