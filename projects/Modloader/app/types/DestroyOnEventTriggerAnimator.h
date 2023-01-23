#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/DestroyOnEventTriggerAnimator__Class.h>
#include <Modloader/app/structs/DestroyOnEventTriggerAnimator.h>

namespace app::classes::types {
    namespace DestroyOnEventTriggerAnimator {
        namespace {
            inline app::DestroyOnEventTriggerAnimator__Class* type_info_ref = nullptr;
        }
        inline app::DestroyOnEventTriggerAnimator__Class** type_info = &type_info_ref;
        inline app::DestroyOnEventTriggerAnimator__Class* get_class() {
            return il2cpp::get_class<app::DestroyOnEventTriggerAnimator__Class>(type_info, "", "DestroyOnEventTriggerAnimator");
        }
        inline app::DestroyOnEventTriggerAnimator* create() {
            return il2cpp::create_object<app::DestroyOnEventTriggerAnimator>(get_class());
        }
    } // namespace DestroyOnEventTriggerAnimator
} // namespace app::classes::types
