#pragma once
#include <Modloader/app/structs/DynamicVitalsHealthProvider.h>
#include <Modloader/app/structs/DynamicVitalsHealthProvider__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DynamicVitalsHealthProvider {
        inline app::DynamicVitalsHealthProvider__Class** type_info() {
            static app::DynamicVitalsHealthProvider__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DynamicVitalsHealthProvider__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DynamicVitalsHealthProvider__Class* get_class() {
            return il2cpp::get_class<app::DynamicVitalsHealthProvider__Class>(type_info(), "", "DynamicVitalsHealthProvider");
        }
        inline app::DynamicVitalsHealthProvider* create() {
            return il2cpp::create_object<app::DynamicVitalsHealthProvider>(get_class());
        }
    } // namespace DynamicVitalsHealthProvider
} // namespace app::classes::types
