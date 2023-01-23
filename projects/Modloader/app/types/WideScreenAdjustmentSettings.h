#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/WideScreenAdjustmentSettings__Class.h>
#include <Modloader/app/structs/WideScreenAdjustmentSettings.h>

namespace app::classes::types {
    namespace WideScreenAdjustmentSettings {
        namespace {
            inline app::WideScreenAdjustmentSettings__Class* type_info_ref = nullptr;
        }
        inline app::WideScreenAdjustmentSettings__Class** type_info = &type_info_ref;
        inline app::WideScreenAdjustmentSettings__Class* get_class() {
            return il2cpp::get_class<app::WideScreenAdjustmentSettings__Class>(type_info, "", "WideScreenAdjustmentSettings");
        }
        inline app::WideScreenAdjustmentSettings* create() {
            return il2cpp::create_object<app::WideScreenAdjustmentSettings>(get_class());
        }
    } // namespace WideScreenAdjustmentSettings
} // namespace app::classes::types
