#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/TriggerActionAnimator__Class.h>
#include <Modloader/app/structs/TriggerActionAnimator.h>

namespace app::classes::types {
    namespace TriggerActionAnimator {
        namespace {
            inline app::TriggerActionAnimator__Class* type_info_ref = nullptr;
        }
        inline app::TriggerActionAnimator__Class** type_info = &type_info_ref;
        inline app::TriggerActionAnimator__Class* get_class() {
            return il2cpp::get_class<app::TriggerActionAnimator__Class>(type_info, "Moon.Timeline", "TriggerActionAnimator");
        }
        inline app::TriggerActionAnimator* create() {
            return il2cpp::create_object<app::TriggerActionAnimator>(get_class());
        }
    } // namespace TriggerActionAnimator
} // namespace app::classes::types
