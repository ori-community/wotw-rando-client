#pragma once
#include <Modloader/app/structs/MoonSwarm_DebugSettings.h>
#include <Modloader/app/structs/MoonSwarm_DebugSettings__Boxed.h>
#include <Modloader/app/structs/MoonSwarm_DebugSettings__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MoonSwarm_DebugSettings {
        inline app::MoonSwarm_DebugSettings__Class** type_info() {
            static app::MoonSwarm_DebugSettings__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MoonSwarm_DebugSettings__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MoonSwarm_DebugSettings__Class* get_class() {
            return il2cpp::get_nested_class<app::MoonSwarm_DebugSettings__Class>(type_info(), "", "MoonSwarm", "DebugSettings");
        }
        inline app::MoonSwarm_DebugSettings* create() {
            return il2cpp::create_object<app::MoonSwarm_DebugSettings>(get_class());
        }
        inline app::MoonSwarm_DebugSettings__Boxed* box(app::MoonSwarm_DebugSettings value) {
            return il2cpp::box_value<app::MoonSwarm_DebugSettings__Boxed>(get_class(), value);
        }
    } // namespace MoonSwarm_DebugSettings
} // namespace app::classes::types
