#pragma once
#include <Modloader/app/structs/Vitals_DamageProcessHelper.h>
#include <Modloader/app/structs/Vitals_DamageProcessHelper__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Vitals_DamageProcessHelper {
        inline app::Vitals_DamageProcessHelper__Class** type_info() {
            static app::Vitals_DamageProcessHelper__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Vitals_DamageProcessHelper__Class**)(modloader::win::memory::resolve_rva(0x04714380));
            }
            return cache;
        }
        inline app::Vitals_DamageProcessHelper__Class* get_class() {
            return il2cpp::get_nested_class<app::Vitals_DamageProcessHelper__Class>(type_info(), "Moon", "Vitals", "DamageProcessHelper");
        }
        inline app::Vitals_DamageProcessHelper* create() {
            return il2cpp::create_object<app::Vitals_DamageProcessHelper>(get_class());
        }
    } // namespace Vitals_DamageProcessHelper
} // namespace app::classes::types
