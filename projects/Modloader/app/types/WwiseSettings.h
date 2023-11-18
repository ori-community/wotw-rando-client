#pragma once
#include <Modloader/app/structs/WwiseSettings.h>
#include <Modloader/app/structs/WwiseSettings__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WwiseSettings {
        inline app::WwiseSettings__Class** type_info() {
            static app::WwiseSettings__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::WwiseSettings__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::WwiseSettings__Class* get_class() {
            return il2cpp::get_class<app::WwiseSettings__Class>(type_info(), "", "WwiseSettings");
        }
        inline app::WwiseSettings* create() {
            return il2cpp::create_object<app::WwiseSettings>(get_class());
        }
    } // namespace WwiseSettings
} // namespace app::classes::types
