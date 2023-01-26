#pragma once
#include <Modloader/app/structs/FlutteringShotDownBehaviour_FlutterShotDownState.h>
#include <Modloader/app/structs/FlutteringShotDownBehaviour_FlutterShotDownState__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FlutteringShotDownBehaviour_FlutterShotDownState {
        inline app::FlutteringShotDownBehaviour_FlutterShotDownState__Class** type_info() {
            static app::FlutteringShotDownBehaviour_FlutterShotDownState__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::FlutteringShotDownBehaviour_FlutterShotDownState__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::FlutteringShotDownBehaviour_FlutterShotDownState__Class* get_class() {
            return il2cpp::get_nested_class<app::FlutteringShotDownBehaviour_FlutterShotDownState__Class>(type_info(), "Moon", "FlutteringShotDownBehaviour", "FlutterShotDownState");
        }
        inline app::FlutteringShotDownBehaviour_FlutterShotDownState* create() {
            return il2cpp::create_object<app::FlutteringShotDownBehaviour_FlutterShotDownState>(get_class());
        }
    } // namespace FlutteringShotDownBehaviour_FlutterShotDownState
} // namespace app::classes::types
