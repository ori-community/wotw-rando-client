#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/MultiTargetCameraSetup__Class.h>
#include <Modloader/app/structs/MultiTargetCameraSetup.h>

namespace app::classes::types {
    namespace MultiTargetCameraSetup {
        namespace {
            inline app::MultiTargetCameraSetup__Class* type_info_ref = nullptr;
        }
        inline app::MultiTargetCameraSetup__Class** type_info = &type_info_ref;
        inline app::MultiTargetCameraSetup__Class* get_class() {
            return il2cpp::get_class<app::MultiTargetCameraSetup__Class>(type_info, "Moon", "MultiTargetCameraSetup");
        }
        inline app::MultiTargetCameraSetup* create() {
            return il2cpp::create_object<app::MultiTargetCameraSetup>(get_class());
        }
    } // namespace MultiTargetCameraSetup
} // namespace app::classes::types
