#pragma once
#include <Modloader/app/structs/FlutteringSlamBehaviour_StartState.h>
#include <Modloader/app/structs/FlutteringSlamBehaviour_StartState__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FlutteringSlamBehaviour_StartState {
        inline app::FlutteringSlamBehaviour_StartState__Class** type_info() {
            static app::FlutteringSlamBehaviour_StartState__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::FlutteringSlamBehaviour_StartState__Class**)(modloader::win::memory::resolve_rva(0x0471C3A0));
            }
            return cache;
        }
        inline app::FlutteringSlamBehaviour_StartState__Class* get_class() {
            return il2cpp::get_nested_class<app::FlutteringSlamBehaviour_StartState__Class>(type_info(), "Moon", "FlutteringSlamBehaviour", "StartState");
        }
        inline app::FlutteringSlamBehaviour_StartState* create() {
            return il2cpp::create_object<app::FlutteringSlamBehaviour_StartState>(get_class());
        }
    } // namespace FlutteringSlamBehaviour_StartState
} // namespace app::classes::types
