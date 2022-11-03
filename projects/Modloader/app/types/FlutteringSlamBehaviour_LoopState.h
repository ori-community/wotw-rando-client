#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace FlutteringSlamBehaviour_LoopState {
        inline app::FlutteringSlamBehaviour_LoopState__Class** type_info = (app::FlutteringSlamBehaviour_LoopState__Class**)(modloader::win::memory::resolve_rva(0x047355D0));
        inline app::FlutteringSlamBehaviour_LoopState__Class* get_class() {
            return il2cpp::get_nested_class<app::FlutteringSlamBehaviour_LoopState__Class>(type_info, "Moon", "FlutteringSlamBehaviour", "LoopState");
        }
        inline app::FlutteringSlamBehaviour_LoopState* create() {
            return il2cpp::create_object<app::FlutteringSlamBehaviour_LoopState>(get_class());
        }
    } // namespace FlutteringSlamBehaviour_LoopState
} // namespace app::classes::types
