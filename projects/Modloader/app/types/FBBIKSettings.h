#pragma once
#include <Modloader/app/structs/FBBIKSettings.h>
#include <Modloader/app/structs/FBBIKSettings__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FBBIKSettings {
        inline app::FBBIKSettings__Class** type_info() {
            static app::FBBIKSettings__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::FBBIKSettings__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::FBBIKSettings__Class* get_class() {
            return il2cpp::get_class<app::FBBIKSettings__Class>(type_info(), "RootMotion.Demos", "FBBIKSettings");
        }
        inline app::FBBIKSettings* create() {
            return il2cpp::create_object<app::FBBIKSettings>(get_class());
        }
    } // namespace FBBIKSettings
} // namespace app::classes::types
