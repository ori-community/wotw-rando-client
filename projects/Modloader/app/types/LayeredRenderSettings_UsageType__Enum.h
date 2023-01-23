#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/LayeredRenderSettings_UsageType__Enum__Class.h>
#include <Modloader/app/structs/LayeredRenderSettings_UsageType__Enum.h>

namespace app::classes::types {
    namespace LayeredRenderSettings_UsageType__Enum {
        namespace {
            inline app::LayeredRenderSettings_UsageType__Enum__Class* type_info_ref = nullptr;
        }
        inline app::LayeredRenderSettings_UsageType__Enum__Class** type_info = &type_info_ref;
        inline app::LayeredRenderSettings_UsageType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::LayeredRenderSettings_UsageType__Enum__Class>(type_info, "", "LayeredRenderSettings", "UsageType");
        }
        inline app::LayeredRenderSettings_UsageType__Enum* create() {
            return il2cpp::create_object<app::LayeredRenderSettings_UsageType__Enum>(get_class());
        }
    } // namespace LayeredRenderSettings_UsageType__Enum
} // namespace app::classes::types
