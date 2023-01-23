#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/FlutteringTakeOffBehaviour_FlutterTakeOffState__Class.h>
#include <Modloader/app/structs/FlutteringTakeOffBehaviour_FlutterTakeOffState.h>

namespace app::classes::types {
    namespace FlutteringTakeOffBehaviour_FlutterTakeOffState {
        namespace {
            inline app::FlutteringTakeOffBehaviour_FlutterTakeOffState__Class* type_info_ref = nullptr;
        }
        inline app::FlutteringTakeOffBehaviour_FlutterTakeOffState__Class** type_info = &type_info_ref;
        inline app::FlutteringTakeOffBehaviour_FlutterTakeOffState__Class* get_class() {
            return il2cpp::get_nested_class<app::FlutteringTakeOffBehaviour_FlutterTakeOffState__Class>(type_info, "Moon", "FlutteringTakeOffBehaviour", "FlutterTakeOffState");
        }
        inline app::FlutteringTakeOffBehaviour_FlutterTakeOffState* create() {
            return il2cpp::create_object<app::FlutteringTakeOffBehaviour_FlutterTakeOffState>(get_class());
        }
    } // namespace FlutteringTakeOffBehaviour_FlutterTakeOffState
} // namespace app::classes::types
