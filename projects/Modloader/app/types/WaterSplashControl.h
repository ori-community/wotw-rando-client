#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/WaterSplashControl__Class.h>
#include <Modloader/app/structs/WaterSplashControl.h>

namespace app::classes::types {
    namespace WaterSplashControl {
        namespace {
            inline app::WaterSplashControl__Class* type_info_ref = nullptr;
        }
        inline app::WaterSplashControl__Class** type_info = &type_info_ref;
        inline app::WaterSplashControl__Class* get_class() {
            return il2cpp::get_class<app::WaterSplashControl__Class>(type_info, "", "WaterSplashControl");
        }
        inline app::WaterSplashControl* create() {
            return il2cpp::create_object<app::WaterSplashControl>(get_class());
        }
    } // namespace WaterSplashControl
} // namespace app::classes::types
