#pragma once
#include <Modloader/app/structs/FlutteringSlamBehaviour_FlutterSlamState.h>
#include <Modloader/app/structs/FlutteringSlamBehaviour_FlutterSlamState__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FlutteringSlamBehaviour_FlutterSlamState {
        inline app::FlutteringSlamBehaviour_FlutterSlamState__Class** type_info() {
            static app::FlutteringSlamBehaviour_FlutterSlamState__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::FlutteringSlamBehaviour_FlutterSlamState__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::FlutteringSlamBehaviour_FlutterSlamState__Class* get_class() {
            return il2cpp::get_nested_class<app::FlutteringSlamBehaviour_FlutterSlamState__Class>(type_info(), "Moon", "FlutteringSlamBehaviour", "FlutterSlamState");
        }
        inline app::FlutteringSlamBehaviour_FlutterSlamState* create() {
            return il2cpp::create_object<app::FlutteringSlamBehaviour_FlutterSlamState>(get_class());
        }
    } // namespace FlutteringSlamBehaviour_FlutterSlamState
} // namespace app::classes::types
