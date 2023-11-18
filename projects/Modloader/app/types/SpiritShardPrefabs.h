#pragma once
#include <Modloader/app/structs/SpiritShardPrefabs.h>
#include <Modloader/app/structs/SpiritShardPrefabs__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpiritShardPrefabs {
        inline app::SpiritShardPrefabs__Class** type_info() {
            static app::SpiritShardPrefabs__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SpiritShardPrefabs__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SpiritShardPrefabs__Class* get_class() {
            return il2cpp::get_class<app::SpiritShardPrefabs__Class>(type_info(), "", "SpiritShardPrefabs");
        }
        inline app::SpiritShardPrefabs* create() {
            return il2cpp::create_object<app::SpiritShardPrefabs>(get_class());
        }
    } // namespace SpiritShardPrefabs
} // namespace app::classes::types
