#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/FlutteringTakeOffBehaviour_TurnStartState__Class.h>
#include <Modloader/app/structs/FlutteringTakeOffBehaviour_TurnStartState.h>

namespace app::classes::types {
    namespace FlutteringTakeOffBehaviour_TurnStartState {
        inline app::FlutteringTakeOffBehaviour_TurnStartState__Class** type_info = (app::FlutteringTakeOffBehaviour_TurnStartState__Class**)(modloader::win::memory::resolve_rva(0x04761318));
        inline app::FlutteringTakeOffBehaviour_TurnStartState__Class* get_class() {
            return il2cpp::get_nested_class<app::FlutteringTakeOffBehaviour_TurnStartState__Class>(type_info, "Moon", "FlutteringTakeOffBehaviour", "TurnStartState");
        }
        inline app::FlutteringTakeOffBehaviour_TurnStartState* create() {
            return il2cpp::create_object<app::FlutteringTakeOffBehaviour_TurnStartState>(get_class());
        }
    } // namespace FlutteringTakeOffBehaviour_TurnStartState
} // namespace app::classes::types
