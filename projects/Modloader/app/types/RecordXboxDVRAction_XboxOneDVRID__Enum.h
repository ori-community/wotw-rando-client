#pragma once
#include <Modloader/app/structs/RecordXboxDVRAction_XboxOneDVRID__Enum.h>
#include <Modloader/app/structs/RecordXboxDVRAction_XboxOneDVRID__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RecordXboxDVRAction_XboxOneDVRID__Enum {
        inline app::RecordXboxDVRAction_XboxOneDVRID__Enum__Class** type_info() {
            static app::RecordXboxDVRAction_XboxOneDVRID__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RecordXboxDVRAction_XboxOneDVRID__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RecordXboxDVRAction_XboxOneDVRID__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::RecordXboxDVRAction_XboxOneDVRID__Enum__Class>(type_info(), "", "RecordXboxDVRAction", "XboxOneDVRID");
        }
        inline app::RecordXboxDVRAction_XboxOneDVRID__Enum* create() {
            return il2cpp::create_object<app::RecordXboxDVRAction_XboxOneDVRID__Enum>(get_class());
        }
    } // namespace RecordXboxDVRAction_XboxOneDVRID__Enum
} // namespace app::classes::types
