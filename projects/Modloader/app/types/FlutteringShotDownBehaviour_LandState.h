#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace FlutteringShotDownBehaviour_LandState {
        inline app::FlutteringShotDownBehaviour_LandState__Class** type_info = (app::FlutteringShotDownBehaviour_LandState__Class**)(modloader::win::memory::resolve_rva(0x0470E8E8));
        inline app::FlutteringShotDownBehaviour_LandState__Class* get_class() {
            return il2cpp::get_nested_class<app::FlutteringShotDownBehaviour_LandState__Class>(type_info, "Moon", "FlutteringShotDownBehaviour", "LandState");
        }
        inline app::FlutteringShotDownBehaviour_LandState* create() {
            return il2cpp::create_object<app::FlutteringShotDownBehaviour_LandState>(get_class());
        }
    } // namespace FlutteringShotDownBehaviour_LandState
} // namespace app::classes::types
