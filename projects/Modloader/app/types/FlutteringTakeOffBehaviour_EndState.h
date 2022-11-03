#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace FlutteringTakeOffBehaviour_EndState {
        inline app::FlutteringTakeOffBehaviour_EndState__Class** type_info = (app::FlutteringTakeOffBehaviour_EndState__Class**)(modloader::win::memory::resolve_rva(0x04757A60));
        inline app::FlutteringTakeOffBehaviour_EndState__Class* get_class() {
            return il2cpp::get_nested_class<app::FlutteringTakeOffBehaviour_EndState__Class>(type_info, "Moon", "FlutteringTakeOffBehaviour", "EndState");
        }
        inline app::FlutteringTakeOffBehaviour_EndState* create() {
            return il2cpp::create_object<app::FlutteringTakeOffBehaviour_EndState>(get_class());
        }
    } // namespace FlutteringTakeOffBehaviour_EndState
} // namespace app::classes::types
