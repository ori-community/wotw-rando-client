#pragma once
#include <Modloader/app/structs/OneDsWebRequestPlugin.h>
#include <Modloader/app/structs/OneDsWebRequestPlugin__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace OneDsWebRequestPlugin {
        inline app::OneDsWebRequestPlugin__Class** type_info() {
            static app::OneDsWebRequestPlugin__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::OneDsWebRequestPlugin__Class**)(modloader::win::memory::resolve_rva(0x04763448));
            }
            return cache;
        }
        inline app::OneDsWebRequestPlugin__Class* get_class() {
            return il2cpp::get_class<app::OneDsWebRequestPlugin__Class>(type_info(), "PlayFab.Internal", "OneDsWebRequestPlugin");
        }
        inline app::OneDsWebRequestPlugin* create() {
            return il2cpp::create_object<app::OneDsWebRequestPlugin>(get_class());
        }
    } // namespace OneDsWebRequestPlugin
} // namespace app::classes::types
