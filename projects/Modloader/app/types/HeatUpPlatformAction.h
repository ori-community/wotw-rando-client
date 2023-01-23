#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/HeatUpPlatformAction__Class.h>
#include <Modloader/app/structs/HeatUpPlatformAction.h>

namespace app::classes::types {
    namespace HeatUpPlatformAction {
        namespace {
            inline app::HeatUpPlatformAction__Class* type_info_ref = nullptr;
        }
        inline app::HeatUpPlatformAction__Class** type_info = &type_info_ref;
        inline app::HeatUpPlatformAction__Class* get_class() {
            return il2cpp::get_class<app::HeatUpPlatformAction__Class>(type_info, "", "HeatUpPlatformAction");
        }
        inline app::HeatUpPlatformAction* create() {
            return il2cpp::create_object<app::HeatUpPlatformAction>(get_class());
        }
    } // namespace HeatUpPlatformAction
} // namespace app::classes::types
