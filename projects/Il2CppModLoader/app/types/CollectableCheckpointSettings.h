#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CollectableCheckpointSettings {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CollectableCheckpointSettings__Class** type_info;
        inline app::CollectableCheckpointSettings__Class* get_class() {
            return il2cpp::get_class<app::CollectableCheckpointSettings__Class>(type_info, "", "CollectableCheckpointSettings");
        }
        inline app::CollectableCheckpointSettings* create() {
            return il2cpp::create_object<app::CollectableCheckpointSettings>(get_class());
        }
    } // namespace CollectableCheckpointSettings
} // namespace app::classes::types
