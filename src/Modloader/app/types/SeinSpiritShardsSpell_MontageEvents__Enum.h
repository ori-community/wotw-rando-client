#pragma once
#include <Modloader/app/structs/SeinSpiritShardsSpell_MontageEvents__Enum.h>
#include <Modloader/app/structs/SeinSpiritShardsSpell_MontageEvents__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinSpiritShardsSpell_MontageEvents__Enum {
        inline app::SeinSpiritShardsSpell_MontageEvents__Enum__Class** type_info() {
            static app::SeinSpiritShardsSpell_MontageEvents__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SeinSpiritShardsSpell_MontageEvents__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SeinSpiritShardsSpell_MontageEvents__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::SeinSpiritShardsSpell_MontageEvents__Enum__Class>(type_info(), "", "SeinSpiritShardsSpell", "MontageEvents");
        }
        inline app::SeinSpiritShardsSpell_MontageEvents__Enum* create() {
            return il2cpp::create_object<app::SeinSpiritShardsSpell_MontageEvents__Enum>(get_class());
        }
    } // namespace SeinSpiritShardsSpell_MontageEvents__Enum
} // namespace app::classes::types
