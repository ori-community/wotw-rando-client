#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FlutteringShotDownBehaviour_States {
        extern IL2CPP_MODLOADER_DLLEXPORT app::FlutteringShotDownBehaviour_States__Class** type_info;
        inline app::FlutteringShotDownBehaviour_States__Class* get_class() {
            return il2cpp::get_nested_class<app::FlutteringShotDownBehaviour_States__Class>(type_info, "Moon", "FlutteringShotDownBehaviour", "States");
        }
        inline app::FlutteringShotDownBehaviour_States* create() {
            return il2cpp::create_object<app::FlutteringShotDownBehaviour_States>(get_class());
        }
    } // namespace FlutteringShotDownBehaviour_States
} // namespace app::classes::types
