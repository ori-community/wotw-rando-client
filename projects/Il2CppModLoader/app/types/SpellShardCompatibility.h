#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SpellShardCompatibility {
        namespace {
            inline app::SpellShardCompatibility__Class* type_info_ref = nullptr;
        }
        inline app::SpellShardCompatibility__Class** type_info = &type_info_ref;
        inline app::SpellShardCompatibility__Class* get_class() {
            return il2cpp::get_class<app::SpellShardCompatibility__Class>(type_info, "", "SpellShardCompatibility");
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
