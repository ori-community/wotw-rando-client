#pragma once
#include <Modloader/app/structs/DisabledProperty.h>
#include <Modloader/app/structs/DisabledProperty__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DisabledProperty {
        inline app::DisabledProperty__Class** type_info() {
            static app::DisabledProperty__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DisabledProperty__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DisabledProperty__Class* get_class() {
            return il2cpp::get_class<app::DisabledProperty__Class>(type_info(), "UberShader", "DisabledProperty");
        }
        inline app::DisabledProperty* create() {
            return il2cpp::create_object<app::DisabledProperty>(get_class());
        }
    } // namespace DisabledProperty
} // namespace app::classes::types
