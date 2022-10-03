#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SliderState {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SliderState__Class** type_info;
        inline app::SliderState__Class* get_class() {
            return il2cpp::get_class<app::SliderState__Class>(type_info, "UnityEngine", "SliderState");
        }
        inline app::SliderState* create() {
            return il2cpp::create_object<app::SliderState>(get_class());
        }
    } // namespace SliderState
} // namespace app::classes::types
