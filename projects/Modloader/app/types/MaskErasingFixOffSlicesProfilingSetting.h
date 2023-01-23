#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/MaskErasingFixOffSlicesProfilingSetting__Class.h>
#include <Modloader/app/structs/MaskErasingFixOffSlicesProfilingSetting.h>

namespace app::classes::types {
    namespace MaskErasingFixOffSlicesProfilingSetting {
        namespace {
            inline app::MaskErasingFixOffSlicesProfilingSetting__Class* type_info_ref = nullptr;
        }
        inline app::MaskErasingFixOffSlicesProfilingSetting__Class** type_info = &type_info_ref;
        inline app::MaskErasingFixOffSlicesProfilingSetting__Class* get_class() {
            return il2cpp::get_class<app::MaskErasingFixOffSlicesProfilingSetting__Class>(type_info, "Moon.Telemetry.Performance.Settings", "MaskErasingFixOffSlicesProfilingSetting");
        }
        inline app::MaskErasingFixOffSlicesProfilingSetting* create() {
            return il2cpp::create_object<app::MaskErasingFixOffSlicesProfilingSetting>(get_class());
        }
    } // namespace MaskErasingFixOffSlicesProfilingSetting
} // namespace app::classes::types
