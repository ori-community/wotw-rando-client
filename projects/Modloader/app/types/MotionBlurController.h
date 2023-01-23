#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/MotionBlurController__Class.h>
#include <Modloader/app/structs/MotionBlurController.h>

namespace app::classes::types {
    namespace MotionBlurController {
        namespace {
            inline app::MotionBlurController__Class* type_info_ref = nullptr;
        }
        inline app::MotionBlurController__Class** type_info = &type_info_ref;
        inline app::MotionBlurController__Class* get_class() {
            return il2cpp::get_class<app::MotionBlurController__Class>(type_info, "", "MotionBlurController");
        }
        inline app::MotionBlurController* create() {
            return il2cpp::create_object<app::MotionBlurController>(get_class());
        }
    } // namespace MotionBlurController
} // namespace app::classes::types
