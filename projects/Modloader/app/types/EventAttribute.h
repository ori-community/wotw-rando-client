#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace EventAttribute {
        inline app::EventAttribute__Class** type_info = (app::EventAttribute__Class**)(modloader::win::memory::resolve_rva(0x04765CF0));
        inline app::EventAttribute__Class* get_class() {
            return il2cpp::get_class<app::EventAttribute__Class>(type_info, "System.Diagnostics.Tracing", "EventAttribute");
        }
        inline app::EventAttribute* create() {
            return il2cpp::create_object<app::EventAttribute>(get_class());
        }
    } // namespace EventAttribute
} // namespace app::classes::types
