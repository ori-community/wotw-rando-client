#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace FlutteringSlamBehaviour_StartState {
        inline app::FlutteringSlamBehaviour_StartState__Class** type_info = (app::FlutteringSlamBehaviour_StartState__Class**)(modloader::win::memory::resolve_rva(0x0471C3A0));
        inline app::FlutteringSlamBehaviour_StartState__Class* get_class() {
            return il2cpp::get_nested_class<app::FlutteringSlamBehaviour_StartState__Class>(type_info, "Moon", "FlutteringSlamBehaviour", "StartState");
        }
        inline app::FlutteringSlamBehaviour_StartState* create() {
            return il2cpp::create_object<app::FlutteringSlamBehaviour_StartState>(get_class());
        }
    } // namespace FlutteringSlamBehaviour_StartState
} // namespace app::classes::types
