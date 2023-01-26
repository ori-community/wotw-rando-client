#pragma once
#include <Modloader/app/structs/ClearSettings.h>
#include <Modloader/app/structs/ClearSettings__Boxed.h>
#include <Modloader/app/structs/ClearSettings__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ClearSettings {
        inline app::ClearSettings__Class** type_info() {
            static app::ClearSettings__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ClearSettings__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ClearSettings__Class* get_class() {
            return il2cpp::get_class<app::ClearSettings__Class>(type_info(), "Moon.Rendering", "ClearSettings");
        }
        inline app::ClearSettings* create() {
            return il2cpp::create_object<app::ClearSettings>(get_class());
        }
        inline app::ClearSettings__Boxed* box(app::ClearSettings value) {
            return il2cpp::box_value<app::ClearSettings__Boxed>(get_class(), value);
        }
    } // namespace ClearSettings
} // namespace app::classes::types
