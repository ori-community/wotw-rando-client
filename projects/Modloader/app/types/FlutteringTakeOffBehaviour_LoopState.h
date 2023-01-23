#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/FlutteringTakeOffBehaviour_LoopState__Class.h>
#include <Modloader/app/structs/FlutteringTakeOffBehaviour_LoopState.h>

namespace app::classes::types {
    namespace FlutteringTakeOffBehaviour_LoopState {
        inline app::FlutteringTakeOffBehaviour_LoopState__Class** type_info = (app::FlutteringTakeOffBehaviour_LoopState__Class**)(modloader::win::memory::resolve_rva(0x0475B9F0));
        inline app::FlutteringTakeOffBehaviour_LoopState__Class* get_class() {
            return il2cpp::get_nested_class<app::FlutteringTakeOffBehaviour_LoopState__Class>(type_info, "Moon", "FlutteringTakeOffBehaviour", "LoopState");
        }
        inline app::FlutteringTakeOffBehaviour_LoopState* create() {
            return il2cpp::create_object<app::FlutteringTakeOffBehaviour_LoopState>(get_class());
        }
    } // namespace FlutteringTakeOffBehaviour_LoopState
} // namespace app::classes::types
