#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace PlayFabException {
        inline app::PlayFabException__Class** type_info = (app::PlayFabException__Class**)(modloader::win::memory::resolve_rva(0x0470B740));
        inline app::PlayFabException__Class* get_class() {
            return il2cpp::get_class<app::PlayFabException__Class>(type_info, "PlayFab", "PlayFabException");
        }
        inline app::PlayFabException* create() {
            return il2cpp::create_object<app::PlayFabException>(get_class());
        }
    } // namespace PlayFabException
} // namespace app::classes::types
