#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace FlutteringShotDownBehaviour_FlutterShotDownState {
        namespace {
            inline app::FlutteringShotDownBehaviour_FlutterShotDownState__Class* type_info_ref = nullptr;
        }
        inline app::FlutteringShotDownBehaviour_FlutterShotDownState__Class** type_info = &type_info_ref;
        inline app::FlutteringShotDownBehaviour_FlutterShotDownState__Class* get_class() {
            return il2cpp::get_nested_class<app::FlutteringShotDownBehaviour_FlutterShotDownState__Class>(type_info, "Moon", "FlutteringShotDownBehaviour", "FlutterShotDownState");
        }
        inline app::FlutteringShotDownBehaviour_FlutterShotDownState* create() {
            return il2cpp::create_object<app::FlutteringShotDownBehaviour_FlutterShotDownState>(get_class());
        }
    } // namespace FlutteringShotDownBehaviour_FlutterShotDownState
} // namespace app::classes::types
