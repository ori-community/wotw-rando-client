#pragma once
#include <Modloader/app/structs/TimeScaleDebugMenuItem.h>
#include <Modloader/app/structs/TimeScaleDebugMenuItem__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TimeScaleDebugMenuItem {
        inline app::TimeScaleDebugMenuItem__Class** type_info() {
            static app::TimeScaleDebugMenuItem__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::TimeScaleDebugMenuItem__Class**)(modloader::win::memory::resolve_rva(0x04708DD8));
            }
            return cache;
        }
        inline app::TimeScaleDebugMenuItem__Class* get_class() {
            return il2cpp::get_class<app::TimeScaleDebugMenuItem__Class>(type_info(), "", "TimeScaleDebugMenuItem");
        }
        inline app::TimeScaleDebugMenuItem* create() {
            return il2cpp::create_object<app::TimeScaleDebugMenuItem>(get_class());
        }
    } // namespace TimeScaleDebugMenuItem
} // namespace app::classes::types
