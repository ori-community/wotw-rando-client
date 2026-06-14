#pragma once
#include <Modloader/app/structs/EventWrittenEventArgs.h>
#include <Modloader/app/structs/EventWrittenEventArgs__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EventWrittenEventArgs {
        inline app::EventWrittenEventArgs__Class** type_info() {
            static app::EventWrittenEventArgs__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::EventWrittenEventArgs__Class**)(modloader::win::memory::resolve_rva(0x04730468));
            }
            return cache;
        }
        inline app::EventWrittenEventArgs__Class* get_class() {
            return il2cpp::get_class<app::EventWrittenEventArgs__Class>(type_info(), "System.Diagnostics.Tracing", "EventWrittenEventArgs");
        }
        inline app::EventWrittenEventArgs* create() {
            return il2cpp::create_object<app::EventWrittenEventArgs>(get_class());
        }
    } // namespace EventWrittenEventArgs
} // namespace app::classes::types
