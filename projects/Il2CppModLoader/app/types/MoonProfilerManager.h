#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MoonProfilerManager {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MoonProfilerManager__Class** type_info;
        inline app::MoonProfilerManager__Class* get_class() {
            return il2cpp::get_class<app::MoonProfilerManager__Class>(type_info, "Moon", "MoonProfilerManager");
        }
        inline app::MoonProfilerManager* create() {
            return il2cpp::create_object<app::MoonProfilerManager>(get_class());
        }
    } // namespace MoonProfilerManager
} // namespace app::classes::types
