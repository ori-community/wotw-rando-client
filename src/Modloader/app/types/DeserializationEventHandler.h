#pragma once
#include <Modloader/app/structs/DeserializationEventHandler.h>
#include <Modloader/app/structs/DeserializationEventHandler__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DeserializationEventHandler {
        inline app::DeserializationEventHandler__Class** type_info() {
            static app::DeserializationEventHandler__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DeserializationEventHandler__Class**)(modloader::win::memory::resolve_rva(0x047172E0));
            }
            return cache;
        }
        inline app::DeserializationEventHandler__Class* get_class() {
            return il2cpp::get_class<app::DeserializationEventHandler__Class>(type_info(), "System.Runtime.Serialization", "DeserializationEventHandler");
        }
        inline app::DeserializationEventHandler* create() {
            return il2cpp::create_object<app::DeserializationEventHandler>(get_class());
        }
    } // namespace DeserializationEventHandler
} // namespace app::classes::types
