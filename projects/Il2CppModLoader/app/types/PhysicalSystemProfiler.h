#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PhysicalSystemProfiler {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PhysicalSystemProfiler__Class** type_info;
        inline app::PhysicalSystemProfiler__Class* get_class() {
            return il2cpp::get_class<app::PhysicalSystemProfiler__Class>(type_info, "", "PhysicalSystemProfiler");
        }
        inline app::PhysicalSystemProfiler* create() {
            return il2cpp::create_object<app::PhysicalSystemProfiler>(get_class());
        }
    } // namespace PhysicalSystemProfiler
} // namespace app::classes::types
