#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace RecordXboxDVRAction {
        namespace {
            inline app::RecordXboxDVRAction__Class* type_info_ref = nullptr;
        }
        inline app::RecordXboxDVRAction__Class** type_info = &type_info_ref;
        inline app::RecordXboxDVRAction__Class* get_class() {
            return il2cpp::get_class<app::RecordXboxDVRAction__Class>(type_info, "", "RecordXboxDVRAction");
        }
        inline app::RecordXboxDVRAction* create() {
            return il2cpp::create_object<app::RecordXboxDVRAction>(get_class());
        }
    } // namespace RecordXboxDVRAction
} // namespace app::classes::types
