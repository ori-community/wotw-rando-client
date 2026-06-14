#pragma once
#include <Modloader/app/structs/HierarchyDebugMenu_WaitForStepEnd_d_64.h>
#include <Modloader/app/structs/HierarchyDebugMenu_WaitForStepEnd_d_64__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HierarchyDebugMenu_WaitForStepEnd_d_64 {
        inline app::HierarchyDebugMenu_WaitForStepEnd_d_64__Class** type_info() {
            static app::HierarchyDebugMenu_WaitForStepEnd_d_64__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::HierarchyDebugMenu_WaitForStepEnd_d_64__Class**)(modloader::win::memory::resolve_rva(0x047245C0));
            }
            return cache;
        }
        inline app::HierarchyDebugMenu_WaitForStepEnd_d_64__Class* get_class() {
            return il2cpp::get_nested_class<app::HierarchyDebugMenu_WaitForStepEnd_d_64__Class>(type_info(), "", "HierarchyDebugMenu", "<WaitForStepEnd>d__64");
        }
        inline app::HierarchyDebugMenu_WaitForStepEnd_d_64* create() {
            return il2cpp::create_object<app::HierarchyDebugMenu_WaitForStepEnd_d_64>(get_class());
        }
    } // namespace HierarchyDebugMenu_WaitForStepEnd_d_64
} // namespace app::classes::types
