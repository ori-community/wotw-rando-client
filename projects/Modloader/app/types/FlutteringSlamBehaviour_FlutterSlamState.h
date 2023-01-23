#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/FlutteringSlamBehaviour_FlutterSlamState__Class.h>
#include <Modloader/app/structs/FlutteringSlamBehaviour_FlutterSlamState.h>

namespace app::classes::types {
    namespace FlutteringSlamBehaviour_FlutterSlamState {
        namespace {
            inline app::FlutteringSlamBehaviour_FlutterSlamState__Class* type_info_ref = nullptr;
        }
        inline app::FlutteringSlamBehaviour_FlutterSlamState__Class** type_info = &type_info_ref;
        inline app::FlutteringSlamBehaviour_FlutterSlamState__Class* get_class() {
            return il2cpp::get_nested_class<app::FlutteringSlamBehaviour_FlutterSlamState__Class>(type_info, "Moon", "FlutteringSlamBehaviour", "FlutterSlamState");
        }
        inline app::FlutteringSlamBehaviour_FlutterSlamState* create() {
            return il2cpp::create_object<app::FlutteringSlamBehaviour_FlutterSlamState>(get_class());
        }
    } // namespace FlutteringSlamBehaviour_FlutterSlamState
} // namespace app::classes::types
