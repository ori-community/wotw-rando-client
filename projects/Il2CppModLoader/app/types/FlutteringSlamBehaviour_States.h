#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FlutteringSlamBehaviour_States {
        extern IL2CPP_MODLOADER_DLLEXPORT app::FlutteringSlamBehaviour_States__Class** type_info;
        inline app::FlutteringSlamBehaviour_States__Class* get_class() {
            return il2cpp::get_nested_class<app::FlutteringSlamBehaviour_States__Class>(type_info, "Moon", "FlutteringSlamBehaviour", "States");
        }
        inline app::FlutteringSlamBehaviour_States* create() {
            return il2cpp::create_object<app::FlutteringSlamBehaviour_States>(get_class());
        }
    } // namespace FlutteringSlamBehaviour_States
} // namespace app::classes::types
