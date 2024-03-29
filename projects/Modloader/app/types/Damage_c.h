#pragma once
#include <Modloader/app/structs/Damage_c.h>
#include <Modloader/app/structs/Damage_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Damage_c {
        inline app::Damage_c__Class** type_info() {
            static app::Damage_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Damage_c__Class**)(modloader::win::memory::resolve_rva(0x0473FCB0));
            }
            return cache;
        }
        inline app::Damage_c__Class* get_class() {
            return il2cpp::get_nested_class<app::Damage_c__Class>(type_info(), "", "Damage", "<>c");
        }
        inline app::Damage_c* create() {
            return il2cpp::create_object<app::Damage_c>(get_class());
        }
    } // namespace Damage_c
} // namespace app::classes::types
