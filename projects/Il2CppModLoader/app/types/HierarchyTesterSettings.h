#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace HierarchyTesterSettings {
        extern IL2CPP_MODLOADER_DLLEXPORT app::HierarchyTesterSettings__Class** type_info;
        inline app::HierarchyTesterSettings__Class* get_class() {
            return il2cpp::get_class<app::HierarchyTesterSettings__Class>(type_info, "Moon.HierarchyPerformanceTest", "HierarchyTesterSettings");
        }
        inline app::HierarchyTesterSettings* create() {
            return il2cpp::create_object<app::HierarchyTesterSettings>(get_class());
        }
    } // namespace HierarchyTesterSettings
} // namespace app::classes::types
