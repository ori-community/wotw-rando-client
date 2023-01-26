#pragma once
#include <Modloader/app/structs/PlayFabLogger.h>
#include <Modloader/app/structs/PlayFabLogger__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlayFabLogger {
        inline app::PlayFabLogger__Class** type_info() {
            static app::PlayFabLogger__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PlayFabLogger__Class**)(modloader::win::memory::resolve_rva(0x047297B0));
            }
            return cache;
        }
        inline app::PlayFabLogger__Class* get_class() {
            return il2cpp::get_class<app::PlayFabLogger__Class>(type_info(), "PlayFab.Public", "PlayFabLogger");
        }
        inline app::PlayFabLogger* create() {
            return il2cpp::create_object<app::PlayFabLogger>(get_class());
        }
    } // namespace PlayFabLogger
} // namespace app::classes::types
