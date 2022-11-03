#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace OneDsUnityHttpPlugin {
        inline app::OneDsUnityHttpPlugin__Class** type_info = (app::OneDsUnityHttpPlugin__Class**)(modloader::win::memory::resolve_rva(0x04792548));
        inline app::OneDsUnityHttpPlugin__Class* get_class() {
            return il2cpp::get_class<app::OneDsUnityHttpPlugin__Class>(type_info, "PlayFab.Internal", "OneDsUnityHttpPlugin");
        }
        inline app::OneDsUnityHttpPlugin* create() {
            return il2cpp::create_object<app::OneDsUnityHttpPlugin>(get_class());
        }
    } // namespace OneDsUnityHttpPlugin
} // namespace app::classes::types
