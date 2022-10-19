#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MoonSwarm_DebugSettings {
        namespace {
            inline app::MoonSwarm_DebugSettings__Class* type_info_ref = nullptr;
        }
        inline app::MoonSwarm_DebugSettings__Class** type_info = &type_info_ref;
        inline app::MoonSwarm_DebugSettings__Class* get_class() {
            return il2cpp::get_nested_class<app::MoonSwarm_DebugSettings__Class>(type_info, "", "MoonSwarm", "DebugSettings");
        }
        inline app::MoonSwarm_DebugSettings* create() {
            return il2cpp::create_object<app::MoonSwarm_DebugSettings>(get_class());
        }
        inline app::MoonSwarm_DebugSettings__Boxed* box(app::MoonSwarm_DebugSettings value) {
            return il2cpp::box_value<app::MoonSwarm_DebugSettings__Boxed>(get_class(), value);
        }
    } // namespace MoonSwarm_DebugSettings
} // namespace app::classes::types
