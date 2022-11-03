#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SafeSerializationManager {
        inline app::SafeSerializationManager__Class** type_info = (app::SafeSerializationManager__Class**)(modloader::win::memory::resolve_rva(0x04753E90));
        inline app::SafeSerializationManager__Class* get_class() {
            return il2cpp::get_class<app::SafeSerializationManager__Class>(type_info, "System.Runtime.Serialization", "SafeSerializationManager");
        }
        inline app::SafeSerializationManager* create() {
            return il2cpp::create_object<app::SafeSerializationManager>(get_class());
        }
    } // namespace SafeSerializationManager
} // namespace app::classes::types
