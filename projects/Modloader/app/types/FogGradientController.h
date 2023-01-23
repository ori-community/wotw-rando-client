#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/FogGradientController__Class.h>
#include <Modloader/app/structs/FogGradientController.h>

namespace app::classes::types {
    namespace FogGradientController {
        namespace {
            inline app::FogGradientController__Class* type_info_ref = nullptr;
        }
        inline app::FogGradientController__Class** type_info = &type_info_ref;
        inline app::FogGradientController__Class* get_class() {
            return il2cpp::get_class<app::FogGradientController__Class>(type_info, "", "FogGradientController");
        }
        inline app::FogGradientController* create() {
            return il2cpp::create_object<app::FogGradientController>(get_class());
        }
    } // namespace FogGradientController
} // namespace app::classes::types
