#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace NotifyMatchmakerPlayerLeftResult {
        inline app::NotifyMatchmakerPlayerLeftResult__Class** type_info = (app::NotifyMatchmakerPlayerLeftResult__Class**)(modloader::win::memory::resolve_rva(0x04798998));
        inline app::NotifyMatchmakerPlayerLeftResult__Class* get_class() {
            return il2cpp::get_class<app::NotifyMatchmakerPlayerLeftResult__Class>(type_info, "PlayFab.ServerModels", "NotifyMatchmakerPlayerLeftResult");
        }
        inline app::NotifyMatchmakerPlayerLeftResult* create() {
            return il2cpp::create_object<app::NotifyMatchmakerPlayerLeftResult>(get_class());
        }
    } // namespace NotifyMatchmakerPlayerLeftResult
} // namespace app::classes::types
