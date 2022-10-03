#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FlutteringTakeOffBehaviour_EndState {
        extern IL2CPP_MODLOADER_DLLEXPORT app::FlutteringTakeOffBehaviour_EndState__Class** type_info;
        inline app::FlutteringTakeOffBehaviour_EndState__Class* get_class() {
            return il2cpp::get_nested_class<app::FlutteringTakeOffBehaviour_EndState__Class>(type_info, "Moon", "FlutteringTakeOffBehaviour", "EndState");
        }
        inline app::FlutteringTakeOffBehaviour_EndState* create() {
            return il2cpp::create_object<app::FlutteringTakeOffBehaviour_EndState>(get_class());
        }
    } // namespace FlutteringTakeOffBehaviour_EndState
} // namespace app::classes::types
