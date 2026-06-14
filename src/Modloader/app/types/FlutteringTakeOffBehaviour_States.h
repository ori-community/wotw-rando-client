#pragma once
#include <Modloader/app/structs/FlutteringTakeOffBehaviour_States.h>
#include <Modloader/app/structs/FlutteringTakeOffBehaviour_States__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FlutteringTakeOffBehaviour_States {
        inline app::FlutteringTakeOffBehaviour_States__Class** type_info() {
            static app::FlutteringTakeOffBehaviour_States__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::FlutteringTakeOffBehaviour_States__Class**)(modloader::win::memory::resolve_rva(0x04787760));
            }
            return cache;
        }
        inline app::FlutteringTakeOffBehaviour_States__Class* get_class() {
            return il2cpp::get_nested_class<app::FlutteringTakeOffBehaviour_States__Class>(type_info(), "Moon", "FlutteringTakeOffBehaviour", "States");
        }
        inline app::FlutteringTakeOffBehaviour_States* create() {
            return il2cpp::create_object<app::FlutteringTakeOffBehaviour_States>(get_class());
        }
    } // namespace FlutteringTakeOffBehaviour_States
} // namespace app::classes::types
