#pragma once
#include <Modloader/app/structs/MoonAnimationEvent.h>
#include <Modloader/app/structs/MoonAnimationEvent__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MoonAnimationEvent {
        inline app::MoonAnimationEvent__Class** type_info() {
            static app::MoonAnimationEvent__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MoonAnimationEvent__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MoonAnimationEvent__Class* get_class() {
            return il2cpp::get_class<app::MoonAnimationEvent__Class>(type_info(), "Moon", "MoonAnimationEvent");
        }
        inline app::MoonAnimationEvent* create() {
            return il2cpp::create_object<app::MoonAnimationEvent>(get_class());
        }
    } // namespace MoonAnimationEvent
} // namespace app::classes::types
