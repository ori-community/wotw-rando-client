#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SeinSpiritShardsSpell {
        namespace {
            app::SeinSpiritShardsSpell__Class* type_info_ref = nullptr;
        }
        app::SeinSpiritShardsSpell__Class** type_info = &type_info_ref;
        inline app::SeinSpiritShardsSpell__Class* get_class() {
            return il2cpp::get_class<app::SeinSpiritShardsSpell__Class>(type_info, "", "SeinSpiritShardsSpell");
        }
        inline app::SeinSpiritShardsSpell* create() {
            return il2cpp::create_object<app::SeinSpiritShardsSpell>(get_class());
        }
    } // namespace SeinSpiritShardsSpell
} // namespace app::classes::types
