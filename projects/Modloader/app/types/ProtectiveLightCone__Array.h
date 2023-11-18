#pragma once
#include <Modloader/app/structs/ProtectiveLightCone__Array.h>
#include <Modloader/app/structs/ProtectiveLightCone__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ProtectiveLightCone__Array {
        inline app::ProtectiveLightCone__Array__Class** type_info() {
            static app::ProtectiveLightCone__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ProtectiveLightCone__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ProtectiveLightCone__Array__Class* get_class() {
            return il2cpp::get_class<app::ProtectiveLightCone__Array__Class>(type_info(), "", "ProtectiveLightCone[]");
        }
        inline app::ProtectiveLightCone__Array* create() {
            return il2cpp::create_object<app::ProtectiveLightCone__Array>(get_class());
        }
    } // namespace ProtectiveLightCone__Array
} // namespace app::classes::types
