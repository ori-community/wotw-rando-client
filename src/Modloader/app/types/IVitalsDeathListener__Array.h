#pragma once
#include <Modloader/app/structs/IVitalsDeathListener__Array.h>
#include <Modloader/app/structs/IVitalsDeathListener__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IVitalsDeathListener__Array {
        inline app::IVitalsDeathListener__Array__Class** type_info() {
            static app::IVitalsDeathListener__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::IVitalsDeathListener__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::IVitalsDeathListener__Array__Class* get_class() {
            return il2cpp::get_class<app::IVitalsDeathListener__Array__Class>(type_info(), "Moon", "IVitalsDeathListener[]");
        }
        inline app::IVitalsDeathListener__Array* create() {
            return il2cpp::create_object<app::IVitalsDeathListener__Array>(get_class());
        }
    } // namespace IVitalsDeathListener__Array
} // namespace app::classes::types
