#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/TurbulenceSettings__Class.h>
#include <Modloader/app/structs/TurbulenceSettings.h>

namespace app::classes::types {
    namespace TurbulenceSettings {
        namespace {
            inline app::TurbulenceSettings__Class* type_info_ref = nullptr;
        }
        inline app::TurbulenceSettings__Class** type_info = &type_info_ref;
        inline app::TurbulenceSettings__Class* get_class() {
            return il2cpp::get_class<app::TurbulenceSettings__Class>(type_info, "", "TurbulenceSettings");
        }
        inline app::TurbulenceSettings* create() {
            return il2cpp::create_object<app::TurbulenceSettings>(get_class());
        }
    } // namespace TurbulenceSettings
} // namespace app::classes::types
