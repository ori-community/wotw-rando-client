#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FlutteringTakeOffBehaviour_StartState {
        extern IL2CPP_MODLOADER_DLLEXPORT app::FlutteringTakeOffBehaviour_StartState__Class** type_info;
        inline app::FlutteringTakeOffBehaviour_StartState__Class* get_class() {
            return il2cpp::get_nested_class<app::FlutteringTakeOffBehaviour_StartState__Class>(type_info, "Moon", "FlutteringTakeOffBehaviour", "StartState");
        }
        inline app::FlutteringTakeOffBehaviour_StartState* create() {
            return il2cpp::create_object<app::FlutteringTakeOffBehaviour_StartState>(get_class());
        }
    } // namespace FlutteringTakeOffBehaviour_StartState
} // namespace app::classes::types
