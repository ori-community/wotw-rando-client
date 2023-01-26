#pragma once
#include <Modloader/app/structs/TraceSwitch.h>
#include <Modloader/app/structs/TraceSwitch__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TraceSwitch {
        inline app::TraceSwitch__Class** type_info() {
            static app::TraceSwitch__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::TraceSwitch__Class**)(modloader::win::memory::resolve_rva(0x04709350));
            }
            return cache;
        }
        inline app::TraceSwitch__Class* get_class() {
            return il2cpp::get_class<app::TraceSwitch__Class>(type_info(), "System.Diagnostics", "TraceSwitch");
        }
        inline app::TraceSwitch* create() {
            return il2cpp::create_object<app::TraceSwitch>(get_class());
        }
    } // namespace TraceSwitch
} // namespace app::classes::types
