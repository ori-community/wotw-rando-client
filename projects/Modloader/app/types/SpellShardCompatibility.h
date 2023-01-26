#pragma once
#include <Modloader/app/structs/SpellShardCompatibility.h>
#include <Modloader/app/structs/SpellShardCompatibility__Array.h>
#include <Modloader/app/structs/SpellShardCompatibility__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpellShardCompatibility {
        inline app::SpellShardCompatibility__Class** type_info() {
            static app::SpellShardCompatibility__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SpellShardCompatibility__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SpellShardCompatibility__Class* get_class() {
            return il2cpp::get_class<app::SpellShardCompatibility__Class>(type_info(), "", "SpellShardCompatibility");
        }
        inline app::SpellShardCompatibility* create() {
            return il2cpp::create_object<app::SpellShardCompatibility>(get_class());
        }
        inline app::SpellShardCompatibility__Array* create_array(int size) {
            return il2cpp::array_new<app::SpellShardCompatibility__Array>(get_class(), size);
        }
        inline app::SpellShardCompatibility__Array* create_array(const std::vector<app::SpellShardCompatibility*>& items) {
            return il2cpp::array_new<app::SpellShardCompatibility__Array>(get_class(), items);
        }
    } // namespace SpellShardCompatibility
} // namespace app::classes::types
