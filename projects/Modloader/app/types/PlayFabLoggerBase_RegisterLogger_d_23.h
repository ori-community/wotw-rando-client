#pragma once
#include <Modloader/app/structs/PlayFabLoggerBase_RegisterLogger_d_23.h>
#include <Modloader/app/structs/PlayFabLoggerBase_RegisterLogger_d_23__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlayFabLoggerBase_RegisterLogger_d_23 {
        inline app::PlayFabLoggerBase_RegisterLogger_d_23__Class** type_info() {
            static app::PlayFabLoggerBase_RegisterLogger_d_23__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PlayFabLoggerBase_RegisterLogger_d_23__Class**)(modloader::win::memory::resolve_rva(0x04732C50));
            }
            return cache;
        }
        inline app::PlayFabLoggerBase_RegisterLogger_d_23__Class* get_class() {
            return il2cpp::get_nested_class<app::PlayFabLoggerBase_RegisterLogger_d_23__Class>(type_info(), "PlayFab.Public", "PlayFabLoggerBase", "<RegisterLogger>d__23");
        }
        inline app::PlayFabLoggerBase_RegisterLogger_d_23* create() {
            return il2cpp::create_object<app::PlayFabLoggerBase_RegisterLogger_d_23>(get_class());
        }
    } // namespace PlayFabLoggerBase_RegisterLogger_d_23
} // namespace app::classes::types
