#pragma once
#include <Modloader/app/structs/SafeSerializationManager.h>
#include <Modloader/app/structs/SafeSerializationManager__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SafeSerializationManager {
        inline app::SafeSerializationManager__Class** type_info() {
            static app::SafeSerializationManager__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SafeSerializationManager__Class**)(modloader::win::memory::resolve_rva(0x04753E90));
            }
            return cache;
        }
        inline app::SafeSerializationManager__Class* get_class() {
            return il2cpp::get_class<app::SafeSerializationManager__Class>(type_info(), "System.Runtime.Serialization", "SafeSerializationManager");
        }
        inline app::SafeSerializationManager* create() {
            return il2cpp::create_object<app::SafeSerializationManager>(get_class());
        }
    } // namespace SafeSerializationManager
} // namespace app::classes::types
