#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/EarlyZParentDebugger_GridOptions__Class.h>
#include <Modloader/app/structs/EarlyZParentDebugger_GridOptions.h>
#include <Modloader/app/structs/EarlyZParentDebugger_GridOptions__Boxed.h>

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
