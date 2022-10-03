#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SpellShardCompatibility__Array {
        namespace {
            app::SpellShardCompatibility__Array__Class* type_info_ref = nullptr;
        }
        app::SpellShardCompatibility__Array__Class** type_info = &type_info_ref;
        inline app::SpellShardCompatibility__Array__Class* get_class() {
            return il2cpp::get_class<app::SpellShardCompatibility__Array__Class>(type_info, "", "SpellShardCompatibility[]");
        }
        inline app::SpellShardCompatibility__Array* create() {
            return il2cpp::create_object<app::SpellShardCompatibility__Array>(get_class());
        }
    } // namespace SpellShardCompatibility__Array
} // namespace app::classes::types
