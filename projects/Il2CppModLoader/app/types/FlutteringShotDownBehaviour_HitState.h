#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FlutteringShotDownBehaviour_HitState {
        extern IL2CPP_MODLOADER_DLLEXPORT app::FlutteringShotDownBehaviour_HitState__Class** type_info;
        inline app::FlutteringShotDownBehaviour_HitState__Class* get_class() {
            return il2cpp::get_nested_class<app::FlutteringShotDownBehaviour_HitState__Class>(type_info, "Moon", "FlutteringShotDownBehaviour", "HitState");
        }
        inline app::FlutteringShotDownBehaviour_HitState* create() {
            return il2cpp::create_object<app::FlutteringShotDownBehaviour_HitState>(get_class());
        }
    } // namespace FlutteringShotDownBehaviour_HitState
} // namespace app::classes::types
