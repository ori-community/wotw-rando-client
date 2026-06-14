#pragma once
#include <Modloader/app/structs/SpellShardCompatibilityCollection.h>
#include <Modloader/app/structs/SpellShardCompatibilityCollection__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpellShardCompatibilityCollection {
        inline app::SpellShardCompatibilityCollection__Class** type_info() {
            static app::SpellShardCompatibilityCollection__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SpellShardCompatibilityCollection__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SpellShardCompatibilityCollection__Class* get_class() {
            return il2cpp::get_class<app::SpellShardCompatibilityCollection__Class>(type_info(), "", "SpellShardCompatibilityCollection");
        }
        inline app::SpellShardCompatibilityCollection* create() {
            return il2cpp::create_object<app::SpellShardCompatibilityCollection>(get_class());
        }
    } // namespace SpellShardCompatibilityCollection
} // namespace app::classes::types
