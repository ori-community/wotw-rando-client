#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CollectableCheckpointSettings {
        inline app::CollectableCheckpointSettings__Class** type_info = (app::CollectableCheckpointSettings__Class**)(modloader::win::memory::resolve_rva(0x04757EC0));
        inline app::CollectableCheckpointSettings__Class* get_class() {
            return il2cpp::get_class<app::CollectableCheckpointSettings__Class>(type_info, "", "CollectableCheckpointSettings");
        }
        inline app::CollectableCheckpointSettings* create() {
            return il2cpp::create_object<app::CollectableCheckpointSettings>(get_class());
        }
    } // namespace CollectableCheckpointSettings
} // namespace app::classes::types
