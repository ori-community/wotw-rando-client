#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PhysicalSystemProfiler_UpdateInfo {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PhysicalSystemProfiler_UpdateInfo__Class** type_info;
        inline app::PhysicalSystemProfiler_UpdateInfo__Class* get_class() {
            return il2cpp::get_nested_class<app::PhysicalSystemProfiler_UpdateInfo__Class>(type_info, "", "PhysicalSystemProfiler", "UpdateInfo");
        }
        inline app::PhysicalSystemProfiler_UpdateInfo* create() {
            return il2cpp::create_object<app::PhysicalSystemProfiler_UpdateInfo>(get_class());
        }
        inline app::PhysicalSystemProfiler_UpdateInfo__Array* create_array(int size) {
            return il2cpp::array_new<app::PhysicalSystemProfiler_UpdateInfo__Array>(get_class(), size);
        }
    } // namespace PhysicalSystemProfiler_UpdateInfo
} // namespace app::classes::types
