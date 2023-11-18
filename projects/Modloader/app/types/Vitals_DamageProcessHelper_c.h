#pragma once
#include <Modloader/app/structs/Vitals_DamageProcessHelper_c.h>
#include <Modloader/app/structs/Vitals_DamageProcessHelper_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Vitals_DamageProcessHelper_c {
        inline app::Vitals_DamageProcessHelper_c__Class** type_info() {
            static app::Vitals_DamageProcessHelper_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Vitals_DamageProcessHelper_c__Class**)(modloader::win::memory::resolve_rva(0x04708740));
            }
            return cache;
        }
        inline app::Vitals_DamageProcessHelper_c__Class* get_class() {
            return il2cpp::get_nested_class<app::Vitals_DamageProcessHelper_c__Class>(type_info(), "Moon", "Vitals+DamageProcessHelper", "<>c");
        }
        inline app::Vitals_DamageProcessHelper_c* create() {
            return il2cpp::create_object<app::Vitals_DamageProcessHelper_c>(get_class());
        }
    } // namespace Vitals_DamageProcessHelper_c
} // namespace app::classes::types
