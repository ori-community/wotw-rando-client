#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace PlayFabLogger {
        inline app::PlayFabLogger__Class** type_info = (app::PlayFabLogger__Class**)(modloader::win::memory::resolve_rva(0x047297B0));
        inline app::PlayFabLogger__Class* get_class() {
            return il2cpp::get_class<app::PlayFabLogger__Class>(type_info, "PlayFab.Public", "PlayFabLogger");
        }
        inline app::PlayFabLogger* create() {
            return il2cpp::create_object<app::PlayFabLogger>(get_class());
        }
    } // namespace PlayFabLogger
} // namespace app::classes::types
