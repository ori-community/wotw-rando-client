#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/TimeScaleDebugMenuItem__Class.h>
#include <Modloader/app/structs/TimeScaleDebugMenuItem.h>

namespace app::classes::types {
    namespace TimeScaleDebugMenuItem {
        inline app::TimeScaleDebugMenuItem__Class** type_info = (app::TimeScaleDebugMenuItem__Class**)(modloader::win::memory::resolve_rva(0x04708DD8));
        inline app::TimeScaleDebugMenuItem__Class* get_class() {
            return il2cpp::get_class<app::TimeScaleDebugMenuItem__Class>(type_info, "", "TimeScaleDebugMenuItem");
        }
        inline app::TimeScaleDebugMenuItem* create() {
            return il2cpp::create_object<app::TimeScaleDebugMenuItem>(get_class());
        }
    } // namespace TimeScaleDebugMenuItem
} // namespace app::classes::types
