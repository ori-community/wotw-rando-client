#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FlutteringTakeOffBehaviour_States {
        extern IL2CPP_MODLOADER_DLLEXPORT app::FlutteringTakeOffBehaviour_States__Class** type_info;
        inline app::FlutteringTakeOffBehaviour_States__Class* get_class() {
            return il2cpp::get_nested_class<app::FlutteringTakeOffBehaviour_States__Class>(type_info, "Moon", "FlutteringTakeOffBehaviour", "States");
        }
        inline app::FlutteringTakeOffBehaviour_States* create() {
            return il2cpp::create_object<app::FlutteringTakeOffBehaviour_States>(get_class());
        }
    } // namespace FlutteringTakeOffBehaviour_States
} // namespace app::classes::types
