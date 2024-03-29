#pragma once
#include <Modloader/app/structs/WaitForAnimationEvent.h>
#include <Modloader/app/structs/WaitForAnimationEvent__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WaitForAnimationEvent {
        inline app::WaitForAnimationEvent__Class** type_info() {
            static app::WaitForAnimationEvent__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::WaitForAnimationEvent__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::WaitForAnimationEvent__Class* get_class() {
            return il2cpp::get_class<app::WaitForAnimationEvent__Class>(type_info(), "", "WaitForAnimationEvent");
        }
        inline app::WaitForAnimationEvent* create() {
            return il2cpp::create_object<app::WaitForAnimationEvent>(get_class());
        }
    } // namespace WaitForAnimationEvent
} // namespace app::classes::types
