#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MoonAnimationEvent {
        namespace {
            app::MoonAnimationEvent__Class* type_info_ref = nullptr;
        }
        app::MoonAnimationEvent__Class** type_info = &type_info_ref;
        inline app::MoonAnimationEvent__Class* get_class() {
            return il2cpp::get_class<app::MoonAnimationEvent__Class>(type_info, "Moon", "MoonAnimationEvent");
        }
        inline app::MoonAnimationEvent* create() {
            return il2cpp::create_object<app::MoonAnimationEvent>(get_class());
        }
    } // namespace MoonAnimationEvent
} // namespace app::classes::types
