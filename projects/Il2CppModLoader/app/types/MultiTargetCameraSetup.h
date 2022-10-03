#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MultiTargetCameraSetup {
        namespace {
            app::MultiTargetCameraSetup__Class* type_info_ref = nullptr;
        }
        app::MultiTargetCameraSetup__Class** type_info = &type_info_ref;
        inline app::MultiTargetCameraSetup__Class* get_class() {
            return il2cpp::get_class<app::MultiTargetCameraSetup__Class>(type_info, "Moon", "MultiTargetCameraSetup");
        }
        inline app::MultiTargetCameraSetup* create() {
            return il2cpp::create_object<app::MultiTargetCameraSetup>(get_class());
        }
    } // namespace MultiTargetCameraSetup
} // namespace app::classes::types
