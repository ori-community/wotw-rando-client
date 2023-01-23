#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/EarlyZParentDebugger__Class.h>
#include <Modloader/app/structs/EarlyZParentDebugger.h>

namespace app::classes::types {
    namespace EarlyZParentDebugger {
        namespace {
            inline app::EarlyZParentDebugger__Class* type_info_ref = nullptr;
        }
        inline app::EarlyZParentDebugger__Class** type_info = &type_info_ref;
        inline app::EarlyZParentDebugger__Class* get_class() {
            return il2cpp::get_class<app::EarlyZParentDebugger__Class>(type_info, "Moon.Rendering", "EarlyZParentDebugger");
        }
        inline app::EarlyZParentDebugger* create() {
            return il2cpp::create_object<app::EarlyZParentDebugger>(get_class());
        }
    } // namespace EarlyZParentDebugger
} // namespace app::classes::types
