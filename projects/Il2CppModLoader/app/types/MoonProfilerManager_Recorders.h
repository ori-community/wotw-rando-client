#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MoonProfilerManager_Recorders {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MoonProfilerManager_Recorders__Class** type_info;
        inline app::MoonProfilerManager_Recorders__Class* get_class() {
            return il2cpp::get_nested_class<app::MoonProfilerManager_Recorders__Class>(type_info, "Moon", "MoonProfilerManager", "Recorders");
        }
        inline app::MoonProfilerManager_Recorders* create() {
            return il2cpp::create_object<app::MoonProfilerManager_Recorders>(get_class());
        }
    } // namespace MoonProfilerManager_Recorders
} // namespace app::classes::types
