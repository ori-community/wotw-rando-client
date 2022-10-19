#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MechSpiderController {
        namespace {
            inline app::MechSpiderController__Class* type_info_ref = nullptr;
        }
        inline app::MechSpiderController__Class** type_info = &type_info_ref;
        inline app::MechSpiderController__Class* get_class() {
            return il2cpp::get_class<app::MechSpiderController__Class>(type_info, "RootMotion.Demos", "MechSpiderController");
        }
        inline app::MechSpiderController* create() {
            return il2cpp::create_object<app::MechSpiderController>(get_class());
        }
    } // namespace MechSpiderController
} // namespace app::classes::types
