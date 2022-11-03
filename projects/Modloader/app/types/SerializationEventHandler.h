#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SerializationEventHandler {
        inline app::SerializationEventHandler__Class** type_info = (app::SerializationEventHandler__Class**)(modloader::win::memory::resolve_rva(0x0476D258));
        inline app::SerializationEventHandler__Class* get_class() {
            return il2cpp::get_class<app::SerializationEventHandler__Class>(type_info, "System.Runtime.Serialization", "SerializationEventHandler");
        }
        inline app::SerializationEventHandler* create() {
            return il2cpp::create_object<app::SerializationEventHandler>(get_class());
        }
    } // namespace SerializationEventHandler
} // namespace app::classes::types
