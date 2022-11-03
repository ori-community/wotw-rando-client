#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace UnlinkGoogleAccountResult {
        inline app::UnlinkGoogleAccountResult__Class** type_info = (app::UnlinkGoogleAccountResult__Class**)(modloader::win::memory::resolve_rva(0x04796FD0));
        inline app::UnlinkGoogleAccountResult__Class* get_class() {
            return il2cpp::get_class<app::UnlinkGoogleAccountResult__Class>(type_info, "PlayFab.ClientModels", "UnlinkGoogleAccountResult");
        }
        inline app::UnlinkGoogleAccountResult* create() {
            return il2cpp::create_object<app::UnlinkGoogleAccountResult>(get_class());
        }
    } // namespace UnlinkGoogleAccountResult
} // namespace app::classes::types
