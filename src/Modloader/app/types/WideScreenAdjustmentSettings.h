#pragma once
#include <Modloader/app/structs/WideScreenAdjustmentSettings.h>
#include <Modloader/app/structs/WideScreenAdjustmentSettings__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WideScreenAdjustmentSettings {
        inline app::WideScreenAdjustmentSettings__Class** type_info() {
            static app::WideScreenAdjustmentSettings__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::WideScreenAdjustmentSettings__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::WideScreenAdjustmentSettings__Class* get_class() {
            return il2cpp::get_class<app::WideScreenAdjustmentSettings__Class>(type_info(), "", "WideScreenAdjustmentSettings");
        }
        inline app::WideScreenAdjustmentSettings* create() {
            return il2cpp::create_object<app::WideScreenAdjustmentSettings>(get_class());
        }
    } // namespace WideScreenAdjustmentSettings
} // namespace app::classes::types
