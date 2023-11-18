#pragma once
#include <Modloader/app/structs/SpiritShardDescriptionCollection.h>
#include <Modloader/app/structs/SpiritShardDescriptionCollection__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpiritShardDescriptionCollection {
        inline app::SpiritShardDescriptionCollection__Class** type_info() {
            static app::SpiritShardDescriptionCollection__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SpiritShardDescriptionCollection__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SpiritShardDescriptionCollection__Class* get_class() {
            return il2cpp::get_class<app::SpiritShardDescriptionCollection__Class>(type_info(), "", "SpiritShardDescriptionCollection");
        }
        inline app::SpiritShardDescriptionCollection* create() {
            return il2cpp::create_object<app::SpiritShardDescriptionCollection>(get_class());
        }
    } // namespace SpiritShardDescriptionCollection
} // namespace app::classes::types
