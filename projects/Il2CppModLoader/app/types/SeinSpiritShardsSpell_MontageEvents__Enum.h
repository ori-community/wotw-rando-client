#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SeinSpiritShardsSpell_MontageEvents__Enum {
        namespace {
            app::SeinSpiritShardsSpell_MontageEvents__Enum__Class* type_info_ref = nullptr;
        }
        app::SeinSpiritShardsSpell_MontageEvents__Enum__Class** type_info = &type_info_ref;
        inline app::SeinSpiritShardsSpell_MontageEvents__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::SeinSpiritShardsSpell_MontageEvents__Enum__Class>(type_info, "", "SeinSpiritShardsSpell", "MontageEvents");
        }
        inline app::SeinSpiritShardsSpell_MontageEvents__Enum* create() {
            return il2cpp::create_object<app::SeinSpiritShardsSpell_MontageEvents__Enum>(get_class());
        }
    } // namespace SeinSpiritShardsSpell_MontageEvents__Enum
} // namespace app::classes::types
