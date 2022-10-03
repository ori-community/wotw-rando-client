#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FlutteringSlamBehaviour_StartState {
        extern IL2CPP_MODLOADER_DLLEXPORT app::FlutteringSlamBehaviour_StartState__Class** type_info;
        inline app::FlutteringSlamBehaviour_StartState__Class* get_class() {
            return il2cpp::get_nested_class<app::FlutteringSlamBehaviour_StartState__Class>(type_info, "Moon", "FlutteringSlamBehaviour", "StartState");
        }
        inline app::FlutteringSlamBehaviour_StartState* create() {
            return il2cpp::create_object<app::FlutteringSlamBehaviour_StartState>(get_class());
        }
    } // namespace FlutteringSlamBehaviour_StartState
} // namespace app::classes::types
