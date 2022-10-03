#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RecordXboxDVRAction {
        namespace {
            app::RecordXboxDVRAction__Class* type_info_ref = nullptr;
        }
        app::RecordXboxDVRAction__Class** type_info = &type_info_ref;
        inline app::RecordXboxDVRAction__Class* get_class() {
            return il2cpp::get_class<app::RecordXboxDVRAction__Class>(type_info, "", "RecordXboxDVRAction");
        }
        inline app::RecordXboxDVRAction* create() {
            return il2cpp::create_object<app::RecordXboxDVRAction>(get_class());
        }
    } // namespace RecordXboxDVRAction
} // namespace app::classes::types
