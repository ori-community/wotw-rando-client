#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace PlayFabLoggerBase {
        inline app::PlayFabLoggerBase__Class** type_info = (app::PlayFabLoggerBase__Class**)(modloader::win::memory::resolve_rva(0x047084A8));
        inline app::PlayFabLoggerBase__Class* get_class() {
            return il2cpp::get_class<app::PlayFabLoggerBase__Class>(type_info, "PlayFab.Public", "PlayFabLoggerBase");
        }
        inline app::PlayFabLoggerBase* create() {
            return il2cpp::create_object<app::PlayFabLoggerBase>(get_class());
        }
    } // namespace PlayFabLoggerBase
} // namespace app::classes::types
