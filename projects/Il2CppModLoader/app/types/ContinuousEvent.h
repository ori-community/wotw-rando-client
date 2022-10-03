#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ContinuousEvent {
        namespace {
            app::ContinuousEvent__Class* type_info_ref = nullptr;
        }
        app::ContinuousEvent__Class** type_info = &type_info_ref;
        inline app::ContinuousEvent__Class* get_class() {
            return il2cpp::get_class<app::ContinuousEvent__Class>(type_info, "UnityEngine.Analytics", "ContinuousEvent");
        }
        inline app::ContinuousEvent* create() {
            return il2cpp::create_object<app::ContinuousEvent>(get_class());
        }
    } // namespace ContinuousEvent
} // namespace app::classes::types
