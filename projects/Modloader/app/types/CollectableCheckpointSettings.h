#pragma once
#include <Modloader/app/structs/CollectableCheckpointSettings.h>
#include <Modloader/app/structs/CollectableCheckpointSettings__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CollectableCheckpointSettings {
        inline app::CollectableCheckpointSettings__Class** type_info() {
            static app::CollectableCheckpointSettings__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CollectableCheckpointSettings__Class**)(modloader::win::memory::resolve_rva(0x04757EC0));
            }
            return cache;
        }
        inline app::CollectableCheckpointSettings__Class* get_class() {
            return il2cpp::get_class<app::CollectableCheckpointSettings__Class>(type_info(), "", "CollectableCheckpointSettings");
        }
        inline app::CollectableCheckpointSettings* create() {
            return il2cpp::create_object<app::CollectableCheckpointSettings>(get_class());
        }
    } // namespace CollectableCheckpointSettings
} // namespace app::classes::types
