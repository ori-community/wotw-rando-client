#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/WindSpeedAnimator__Class.h>
#include <Modloader/app/structs/WindSpeedAnimator.h>

namespace app::classes::types {
    namespace WindSpeedAnimator {
        namespace {
            inline app::WindSpeedAnimator__Class* type_info_ref = nullptr;
        }
        inline app::WindSpeedAnimator__Class** type_info = &type_info_ref;
        inline app::WindSpeedAnimator__Class* get_class() {
            return il2cpp::get_class<app::WindSpeedAnimator__Class>(type_info, "", "WindSpeedAnimator");
        }
        inline app::WindSpeedAnimator* create() {
            return il2cpp::create_object<app::WindSpeedAnimator>(get_class());
        }
    } // namespace WindSpeedAnimator
} // namespace app::classes::types
