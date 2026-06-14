#pragma once
#include <Modloader/app/structs/FlutteringShotDownBehaviour_HitState.h>
#include <Modloader/app/structs/FlutteringShotDownBehaviour_HitState__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FlutteringShotDownBehaviour_HitState {
        inline app::FlutteringShotDownBehaviour_HitState__Class** type_info() {
            static app::FlutteringShotDownBehaviour_HitState__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::FlutteringShotDownBehaviour_HitState__Class**)(modloader::win::memory::resolve_rva(0x0475DAD8));
            }
            return cache;
        }
        inline app::FlutteringShotDownBehaviour_HitState__Class* get_class() {
            return il2cpp::get_nested_class<app::FlutteringShotDownBehaviour_HitState__Class>(type_info(), "Moon", "FlutteringShotDownBehaviour", "HitState");
        }
        inline app::FlutteringShotDownBehaviour_HitState* create() {
            return il2cpp::create_object<app::FlutteringShotDownBehaviour_HitState>(get_class());
        }
    } // namespace FlutteringShotDownBehaviour_HitState
} // namespace app::classes::types
