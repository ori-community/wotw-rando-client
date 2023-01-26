#pragma once
#include <Modloader/app/structs/FlutteringShotDownBehaviour_FallState.h>
#include <Modloader/app/structs/FlutteringShotDownBehaviour_FallState__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FlutteringShotDownBehaviour_FallState {
        inline app::FlutteringShotDownBehaviour_FallState__Class** type_info() {
            static app::FlutteringShotDownBehaviour_FallState__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::FlutteringShotDownBehaviour_FallState__Class**)(modloader::win::memory::resolve_rva(0x04768C60));
            }
            return cache;
        }
        inline app::FlutteringShotDownBehaviour_FallState__Class* get_class() {
            return il2cpp::get_nested_class<app::FlutteringShotDownBehaviour_FallState__Class>(type_info(), "Moon", "FlutteringShotDownBehaviour", "FallState");
        }
        inline app::FlutteringShotDownBehaviour_FallState* create() {
            return il2cpp::create_object<app::FlutteringShotDownBehaviour_FallState>(get_class());
        }
    } // namespace FlutteringShotDownBehaviour_FallState
} // namespace app::classes::types
