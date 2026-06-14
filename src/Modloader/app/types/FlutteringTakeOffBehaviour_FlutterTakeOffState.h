#pragma once
#include <Modloader/app/structs/FlutteringTakeOffBehaviour_FlutterTakeOffState.h>
#include <Modloader/app/structs/FlutteringTakeOffBehaviour_FlutterTakeOffState__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FlutteringTakeOffBehaviour_FlutterTakeOffState {
        inline app::FlutteringTakeOffBehaviour_FlutterTakeOffState__Class** type_info() {
            static app::FlutteringTakeOffBehaviour_FlutterTakeOffState__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::FlutteringTakeOffBehaviour_FlutterTakeOffState__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::FlutteringTakeOffBehaviour_FlutterTakeOffState__Class* get_class() {
            return il2cpp::get_nested_class<app::FlutteringTakeOffBehaviour_FlutterTakeOffState__Class>(type_info(), "Moon", "FlutteringTakeOffBehaviour", "FlutterTakeOffState");
        }
        inline app::FlutteringTakeOffBehaviour_FlutterTakeOffState* create() {
            return il2cpp::create_object<app::FlutteringTakeOffBehaviour_FlutterTakeOffState>(get_class());
        }
    } // namespace FlutteringTakeOffBehaviour_FlutterTakeOffState
} // namespace app::classes::types
