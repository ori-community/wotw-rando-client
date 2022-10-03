#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RecordXboxDVRAction_XboxOneDVRID__Enum {
        namespace {
            app::RecordXboxDVRAction_XboxOneDVRID__Enum__Class* type_info_ref = nullptr;
        }
        app::RecordXboxDVRAction_XboxOneDVRID__Enum__Class** type_info = &type_info_ref;
        inline app::RecordXboxDVRAction_XboxOneDVRID__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::RecordXboxDVRAction_XboxOneDVRID__Enum__Class>(type_info, "", "RecordXboxDVRAction", "XboxOneDVRID");
        }
        inline app::RecordXboxDVRAction_XboxOneDVRID__Enum* create() {
            return il2cpp::create_object<app::RecordXboxDVRAction_XboxOneDVRID__Enum>(get_class());
        }
    } // namespace RecordXboxDVRAction_XboxOneDVRID__Enum
} // namespace app::classes::types
