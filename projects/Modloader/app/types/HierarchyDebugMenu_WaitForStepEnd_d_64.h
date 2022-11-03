#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace HierarchyDebugMenu_WaitForStepEnd_d_64 {
        inline app::HierarchyDebugMenu_WaitForStepEnd_d_64__Class** type_info = (app::HierarchyDebugMenu_WaitForStepEnd_d_64__Class**)(modloader::win::memory::resolve_rva(0x047245C0));
        inline app::HierarchyDebugMenu_WaitForStepEnd_d_64__Class* get_class() {
            return il2cpp::get_nested_class<app::HierarchyDebugMenu_WaitForStepEnd_d_64__Class>(type_info, "", "HierarchyDebugMenu", "<WaitForStepEnd>d__64");
        }
        inline app::HierarchyDebugMenu_WaitForStepEnd_d_64* create() {
            return il2cpp::create_object<app::HierarchyDebugMenu_WaitForStepEnd_d_64>(get_class());
        }
    } // namespace HierarchyDebugMenu_WaitForStepEnd_d_64
} // namespace app::classes::types
