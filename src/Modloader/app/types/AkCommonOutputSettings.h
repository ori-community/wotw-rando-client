#pragma once
#include <Modloader/app/structs/AkCommonOutputSettings.h>
#include <Modloader/app/structs/AkCommonOutputSettings__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AkCommonOutputSettings {
        inline app::AkCommonOutputSettings__Class** type_info() {
            static app::AkCommonOutputSettings__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AkCommonOutputSettings__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AkCommonOutputSettings__Class* get_class() {
            return il2cpp::get_class<app::AkCommonOutputSettings__Class>(type_info(), "", "AkCommonOutputSettings");
        }
        inline app::AkCommonOutputSettings* create() {
            return il2cpp::create_object<app::AkCommonOutputSettings>(get_class());
        }
    } // namespace AkCommonOutputSettings
} // namespace app::classes::types
