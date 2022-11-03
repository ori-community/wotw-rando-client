#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace LinkPSNAccountResult {
        inline app::LinkPSNAccountResult__Class** type_info = (app::LinkPSNAccountResult__Class**)(modloader::win::memory::resolve_rva(0x0474D780));
        inline app::LinkPSNAccountResult__Class* get_class() {
            return il2cpp::get_class<app::LinkPSNAccountResult__Class>(type_info, "PlayFab.ClientModels", "LinkPSNAccountResult");
        }
        inline app::LinkPSNAccountResult* create() {
            return il2cpp::create_object<app::LinkPSNAccountResult>(get_class());
        }
    } // namespace LinkPSNAccountResult
} // namespace app::classes::types
