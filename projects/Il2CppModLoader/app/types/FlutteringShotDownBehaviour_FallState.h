#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace FlutteringShotDownBehaviour_FallState {
        inline app::FlutteringShotDownBehaviour_FallState__Class** type_info = (app::FlutteringShotDownBehaviour_FallState__Class**)(modloader::win::memory::resolve_rva(0x04768C60));
        inline app::FlutteringShotDownBehaviour_FallState__Class* get_class() {
            return il2cpp::get_nested_class<app::FlutteringShotDownBehaviour_FallState__Class>(type_info, "Moon", "FlutteringShotDownBehaviour", "FallState");
        }
        inline app::FlutteringShotDownBehaviour_FallState* create() {
            return il2cpp::create_object<app::FlutteringShotDownBehaviour_FallState>(get_class());
        }
    } // namespace FlutteringShotDownBehaviour_FallState
} // namespace app::classes::types
