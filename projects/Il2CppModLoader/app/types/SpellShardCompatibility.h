#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SpellShardCompatibility {
        namespace {
            app::SpellShardCompatibility__Class* type_info_ref = nullptr;
        }
        app::SpellShardCompatibility__Class** type_info = &type_info_ref;
        inline app::SpellShardCompatibility__Class* get_class() {
            return il2cpp::get_class<app::SpellShardCompatibility__Class>(type_info, "", "SpellShardCompatibility");
        }
        inline app::SpellShardCompatibility* create() {
            return il2cpp::create_object<app::SpellShardCompatibility>(get_class());
        }
        inline app::SpellShardCompatibility__Array* create_array(int size) {
            return il2cpp::array_new<app::SpellShardCompatibility__Array>(get_class(), size);
        }
    } // namespace SpellShardCompatibility
} // namespace app::classes::types
