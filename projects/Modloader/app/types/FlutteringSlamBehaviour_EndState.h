#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace FlutteringSlamBehaviour_EndState {
        inline app::FlutteringSlamBehaviour_EndState__Class** type_info = (app::FlutteringSlamBehaviour_EndState__Class**)(modloader::win::memory::resolve_rva(0x04703238));
        inline app::FlutteringSlamBehaviour_EndState__Class* get_class() {
            return il2cpp::get_nested_class<app::FlutteringSlamBehaviour_EndState__Class>(type_info, "Moon", "FlutteringSlamBehaviour", "EndState");
        }
        inline app::FlutteringSlamBehaviour_EndState* create() {
            return il2cpp::create_object<app::FlutteringSlamBehaviour_EndState>(get_class());
        }
    } // namespace FlutteringSlamBehaviour_EndState
} // namespace app::classes::types
