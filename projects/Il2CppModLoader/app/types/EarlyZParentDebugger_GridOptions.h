#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace EarlyZParentDebugger_GridOptions {
        namespace {
            inline app::EarlyZParentDebugger_GridOptions__Class* type_info_ref = nullptr;
        }
        inline app::EarlyZParentDebugger_GridOptions__Class** type_info = &type_info_ref;
        inline app::EarlyZParentDebugger_GridOptions__Class* get_class() {
            return il2cpp::get_nested_class<app::EarlyZParentDebugger_GridOptions__Class>(type_info, "Moon.Rendering", "EarlyZParentDebugger", "GridOptions");
        }
        inline app::EarlyZParentDebugger_GridOptions* create() {
            return il2cpp::create_object<app::EarlyZParentDebugger_GridOptions>(get_class());
        }
        inline app::EarlyZParentDebugger_GridOptions__Boxed* box(app::EarlyZParentDebugger_GridOptions value) {
            return il2cpp::box_value<app::EarlyZParentDebugger_GridOptions__Boxed>(get_class(), value);
        }
    } // namespace EarlyZParentDebugger_GridOptions
} // namespace app::classes::types
