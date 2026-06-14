#pragma once
#include <Modloader/app/structs/SerializationObjectManager.h>
#include <Modloader/app/structs/SerializationObjectManager__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SerializationObjectManager {
        inline app::SerializationObjectManager__Class** type_info() {
            static app::SerializationObjectManager__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SerializationObjectManager__Class**)(modloader::win::memory::resolve_rva(0x04790858));
            }
            return cache;
        }
        inline app::SerializationObjectManager__Class* get_class() {
            return il2cpp::get_class<app::SerializationObjectManager__Class>(type_info(), "System.Runtime.Serialization", "SerializationObjectManager");
        }
        inline app::SerializationObjectManager* create() {
            return il2cpp::create_object<app::SerializationObjectManager>(get_class());
        }
    } // namespace SerializationObjectManager
} // namespace app::classes::types
