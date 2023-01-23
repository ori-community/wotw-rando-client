#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/UberWaterAnimator__Class.h>
#include <Modloader/app/structs/UberWaterAnimator.h>

namespace app::classes::types {
    namespace UberWaterAnimator {
        namespace {
            inline app::UberWaterAnimator__Class* type_info_ref = nullptr;
        }
        inline app::UberWaterAnimator__Class** type_info = &type_info_ref;
        inline app::UberWaterAnimator__Class* get_class() {
            return il2cpp::get_class<app::UberWaterAnimator__Class>(type_info, "", "UberWaterAnimator");
        }
        inline app::UberWaterAnimator* create() {
            return il2cpp::create_object<app::UberWaterAnimator>(get_class());
        }
    } // namespace UberWaterAnimator
} // namespace app::classes::types
