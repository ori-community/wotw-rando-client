#pragma once
#include <Modloader/app/structs/VitalsHealthProvider.h>
#include <Modloader/app/structs/VitalsHealthProvider__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace VitalsHealthProvider {
        inline app::VitalsHealthProvider__Class** type_info() {
            static app::VitalsHealthProvider__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::VitalsHealthProvider__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::VitalsHealthProvider__Class* get_class() {
            return il2cpp::get_class<app::VitalsHealthProvider__Class>(type_info(), "", "VitalsHealthProvider");
        }
        inline app::VitalsHealthProvider* create() {
            return il2cpp::create_object<app::VitalsHealthProvider>(get_class());
        }
    } // namespace VitalsHealthProvider
} // namespace app::classes::types
