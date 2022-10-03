#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SpellUIShardListOverlay_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SpellUIShardListOverlay_c__Class** type_info;
        inline app::SpellUIShardListOverlay_c__Class* get_class() {
            return il2cpp::get_nested_class<app::SpellUIShardListOverlay_c__Class>(type_info, "", "SpellUIShardListOverlay", "<>c");
        }
        inline app::SpellUIShardListOverlay_c* create() {
            return il2cpp::create_object<app::SpellUIShardListOverlay_c>(get_class());
        }
    } // namespace SpellUIShardListOverlay_c
} // namespace app::classes::types
