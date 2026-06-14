#pragma once
#include <Modloader/app/structs/TurbulenceSettings.h>
#include <Modloader/app/structs/TurbulenceSettings__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TurbulenceSettings {
        inline app::TurbulenceSettings__Class** type_info() {
            static app::TurbulenceSettings__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TurbulenceSettings__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TurbulenceSettings__Class* get_class() {
            return il2cpp::get_class<app::TurbulenceSettings__Class>(type_info(), "", "TurbulenceSettings");
        }
        inline app::TurbulenceSettings* create() {
            return il2cpp::create_object<app::TurbulenceSettings>(get_class());
        }
    } // namespace TurbulenceSettings
} // namespace app::classes::types
