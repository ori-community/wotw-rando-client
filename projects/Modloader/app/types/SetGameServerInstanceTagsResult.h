#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SetGameServerInstanceTagsResult {
        inline app::SetGameServerInstanceTagsResult__Class** type_info = (app::SetGameServerInstanceTagsResult__Class**)(modloader::win::memory::resolve_rva(0x04789DF0));
        inline app::SetGameServerInstanceTagsResult__Class* get_class() {
            return il2cpp::get_class<app::SetGameServerInstanceTagsResult__Class>(type_info, "PlayFab.ServerModels", "SetGameServerInstanceTagsResult");
        }
        inline app::SetGameServerInstanceTagsResult* create() {
            return il2cpp::create_object<app::SetGameServerInstanceTagsResult>(get_class());
        }
    } // namespace SetGameServerInstanceTagsResult
} // namespace app::classes::types
