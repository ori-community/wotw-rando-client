#pragma once
#include <Modloader/app/structs/IProfilingSetting__Array.h>
#include <Modloader/app/structs/IProfilingSetting__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IProfilingSetting__Array {
        inline app::IProfilingSetting__Array__Class** type_info() {
            static app::IProfilingSetting__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::IProfilingSetting__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::IProfilingSetting__Array__Class* get_class() {
            return il2cpp::get_class<app::IProfilingSetting__Array__Class>(type_info(), "Moon.Telemetry.Performance.Settings", "IProfilingSetting[]");
        }
        inline app::IProfilingSetting__Array* create() {
            return il2cpp::create_object<app::IProfilingSetting__Array>(get_class());
        }
    } // namespace IProfilingSetting__Array
} // namespace app::classes::types
