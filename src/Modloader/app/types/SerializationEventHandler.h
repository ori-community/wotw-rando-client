#pragma once
#include <Modloader/app/structs/SerializationEventHandler.h>
#include <Modloader/app/structs/SerializationEventHandler__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SerializationEventHandler {
        inline app::SerializationEventHandler__Class** type_info() {
            static app::SerializationEventHandler__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SerializationEventHandler__Class**)(modloader::win::memory::resolve_rva(0x0476D258));
            }
            return cache;
        }
        inline app::SerializationEventHandler__Class* get_class() {
            return il2cpp::get_class<app::SerializationEventHandler__Class>(type_info(), "System.Runtime.Serialization", "SerializationEventHandler");
        }
        inline app::SerializationEventHandler* create() {
            return il2cpp::create_object<app::SerializationEventHandler>(get_class());
        }
    } // namespace SerializationEventHandler
} // namespace app::classes::types
