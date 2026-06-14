#pragma once
#include <Modloader/app/structs/SpiritShardIconsCollection.h>
#include <Modloader/app/structs/SpiritShardIconsCollection__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpiritShardIconsCollection {
        inline app::SpiritShardIconsCollection__Class** type_info() {
            static app::SpiritShardIconsCollection__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SpiritShardIconsCollection__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SpiritShardIconsCollection__Class* get_class() {
            return il2cpp::get_class<app::SpiritShardIconsCollection__Class>(type_info(), "", "SpiritShardIconsCollection");
        }
        inline app::SpiritShardIconsCollection* create() {
            return il2cpp::create_object<app::SpiritShardIconsCollection>(get_class());
        }
    } // namespace SpiritShardIconsCollection
} // namespace app::classes::types
