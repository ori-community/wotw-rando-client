#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FlutteringSlamBehaviour_EndState {
        extern IL2CPP_MODLOADER_DLLEXPORT app::FlutteringSlamBehaviour_EndState__Class** type_info;
        inline app::FlutteringSlamBehaviour_EndState__Class* get_class() {
            return il2cpp::get_nested_class<app::FlutteringSlamBehaviour_EndState__Class>(type_info, "Moon", "FlutteringSlamBehaviour", "EndState");
        }
        inline app::FlutteringSlamBehaviour_EndState* create() {
            return il2cpp::create_object<app::FlutteringSlamBehaviour_EndState>(get_class());
        }
    } // namespace FlutteringSlamBehaviour_EndState
} // namespace app::classes::types
