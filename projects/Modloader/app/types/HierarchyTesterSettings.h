#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace HierarchyTesterSettings {
        inline app::HierarchyTesterSettings__Class** type_info = (app::HierarchyTesterSettings__Class**)(modloader::win::memory::resolve_rva(0x047137A0));
        inline app::HierarchyTesterSettings__Class* get_class() {
            return il2cpp::get_class<app::HierarchyTesterSettings__Class>(type_info, "Moon.HierarchyPerformanceTest", "HierarchyTesterSettings");
        }
        inline app::HierarchyTesterSettings* create() {
            return il2cpp::create_object<app::HierarchyTesterSettings>(get_class());
        }
    } // namespace HierarchyTesterSettings
} // namespace app::classes::types
