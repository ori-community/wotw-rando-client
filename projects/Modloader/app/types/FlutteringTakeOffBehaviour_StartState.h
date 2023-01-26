#pragma once
#include <Modloader/app/structs/FlutteringTakeOffBehaviour_StartState.h>
#include <Modloader/app/structs/FlutteringTakeOffBehaviour_StartState__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FlutteringTakeOffBehaviour_StartState {
        inline app::FlutteringTakeOffBehaviour_StartState__Class** type_info() {
            static app::FlutteringTakeOffBehaviour_StartState__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::FlutteringTakeOffBehaviour_StartState__Class**)(modloader::win::memory::resolve_rva(0x0471B238));
            }
            return cache;
        }
        inline app::FlutteringTakeOffBehaviour_StartState__Class* get_class() {
            return il2cpp::get_nested_class<app::FlutteringTakeOffBehaviour_StartState__Class>(type_info(), "Moon", "FlutteringTakeOffBehaviour", "StartState");
        }
        inline app::FlutteringTakeOffBehaviour_StartState* create() {
            return il2cpp::create_object<app::FlutteringTakeOffBehaviour_StartState>(get_class());
        }
    } // namespace FlutteringTakeOffBehaviour_StartState
} // namespace app::classes::types
