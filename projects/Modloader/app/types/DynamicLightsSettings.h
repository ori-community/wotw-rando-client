#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/DynamicLightsSettings__Class.h>
#include <Modloader/app/structs/DynamicLightsSettings.h>

namespace app::classes::types {
    namespace DynamicLightsSettings {
        namespace {
            inline app::DynamicLightsSettings__Class* type_info_ref = nullptr;
        }
        inline app::DynamicLightsSettings__Class** type_info = &type_info_ref;
        inline app::DynamicLightsSettings__Class* get_class() {
            return il2cpp::get_class<app::DynamicLightsSettings__Class>(type_info, "", "DynamicLightsSettings");
        }
        inline app::DynamicLightsSettings* create() {
            return il2cpp::create_object<app::DynamicLightsSettings>(get_class());
        }
    } // namespace DynamicLightsSettings
} // namespace app::classes::types
