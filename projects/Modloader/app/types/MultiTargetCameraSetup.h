#pragma once
#include <Modloader/app/structs/MultiTargetCameraSetup.h>
#include <Modloader/app/structs/MultiTargetCameraSetup__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MultiTargetCameraSetup {
        inline app::MultiTargetCameraSetup__Class** type_info() {
            static app::MultiTargetCameraSetup__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MultiTargetCameraSetup__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MultiTargetCameraSetup__Class* get_class() {
            return il2cpp::get_class<app::MultiTargetCameraSetup__Class>(type_info(), "Moon", "MultiTargetCameraSetup");
        }
        inline app::MultiTargetCameraSetup* create() {
            return il2cpp::create_object<app::MultiTargetCameraSetup>(get_class());
        }
    } // namespace MultiTargetCameraSetup
} // namespace app::classes::types
