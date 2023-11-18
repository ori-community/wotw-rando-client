#pragma once
#include <Modloader/app/structs/FlutteringTakeOffBehaviour_EndState.h>
#include <Modloader/app/structs/FlutteringTakeOffBehaviour_EndState__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FlutteringTakeOffBehaviour_EndState {
        inline app::FlutteringTakeOffBehaviour_EndState__Class** type_info() {
            static app::FlutteringTakeOffBehaviour_EndState__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::FlutteringTakeOffBehaviour_EndState__Class**)(modloader::win::memory::resolve_rva(0x04757A60));
            }
            return cache;
        }
        inline app::FlutteringTakeOffBehaviour_EndState__Class* get_class() {
            return il2cpp::get_nested_class<app::FlutteringTakeOffBehaviour_EndState__Class>(type_info(), "Moon", "FlutteringTakeOffBehaviour", "EndState");
        }
        inline app::FlutteringTakeOffBehaviour_EndState* create() {
            return il2cpp::create_object<app::FlutteringTakeOffBehaviour_EndState>(get_class());
        }
    } // namespace FlutteringTakeOffBehaviour_EndState
} // namespace app::classes::types
