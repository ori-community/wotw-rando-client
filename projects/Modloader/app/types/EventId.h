#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace EventId {
        inline app::EventId__Class** type_info = (app::EventId__Class**)(modloader::win::memory::resolve_rva(0x04797C38));
        inline app::EventId__Class* get_class() {
            return il2cpp::get_class<app::EventId__Class>(type_info, "Moon.Timeline", "EventId");
        }
        inline app::EventId* create() {
            return il2cpp::create_object<app::EventId>(get_class());
        }
    } // namespace EventId
} // namespace app::classes::types
