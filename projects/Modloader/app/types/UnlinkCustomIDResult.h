#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/UnlinkCustomIDResult__Class.h>
#include <Modloader/app/structs/UnlinkCustomIDResult.h>

namespace app::classes::types {
    namespace UnlinkCustomIDResult {
        inline app::UnlinkCustomIDResult__Class** type_info = (app::UnlinkCustomIDResult__Class**)(modloader::win::memory::resolve_rva(0x047461C8));
        inline app::UnlinkCustomIDResult__Class* get_class() {
            return il2cpp::get_class<app::UnlinkCustomIDResult__Class>(type_info, "PlayFab.ClientModels", "UnlinkCustomIDResult");
        }
        inline app::UnlinkCustomIDResult* create() {
            return il2cpp::create_object<app::UnlinkCustomIDResult>(get_class());
        }
    } // namespace UnlinkCustomIDResult
} // namespace app::classes::types
