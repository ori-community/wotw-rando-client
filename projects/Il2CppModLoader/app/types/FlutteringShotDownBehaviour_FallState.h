#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FlutteringShotDownBehaviour_FallState {
        extern IL2CPP_MODLOADER_DLLEXPORT app::FlutteringShotDownBehaviour_FallState__Class** type_info;
        inline app::FlutteringShotDownBehaviour_FallState__Class* get_class() {
            return il2cpp::get_nested_class<app::FlutteringShotDownBehaviour_FallState__Class>(type_info, "Moon", "FlutteringShotDownBehaviour", "FallState");
        }
        inline app::FlutteringShotDownBehaviour_FallState* create() {
            return il2cpp::create_object<app::FlutteringShotDownBehaviour_FallState>(get_class());
        }
    } // namespace FlutteringShotDownBehaviour_FallState
} // namespace app::classes::types
