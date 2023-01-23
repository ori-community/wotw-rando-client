#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/UnlinkGameCenterAccountResult__Class.h>
#include <Modloader/app/structs/UnlinkGameCenterAccountResult.h>

namespace app::classes::types {
    namespace UnlinkGameCenterAccountResult {
        inline app::UnlinkGameCenterAccountResult__Class** type_info = (app::UnlinkGameCenterAccountResult__Class**)(modloader::win::memory::resolve_rva(0x0471D278));
        inline app::UnlinkGameCenterAccountResult__Class* get_class() {
            return il2cpp::get_class<app::UnlinkGameCenterAccountResult__Class>(type_info, "PlayFab.ClientModels", "UnlinkGameCenterAccountResult");
        }
        inline app::UnlinkGameCenterAccountResult* create() {
            return il2cpp::create_object<app::UnlinkGameCenterAccountResult>(get_class());
        }
    } // namespace UnlinkGameCenterAccountResult
} // namespace app::classes::types
