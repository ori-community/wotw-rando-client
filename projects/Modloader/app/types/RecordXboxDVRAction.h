#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/RecordXboxDVRAction__Class.h>
#include <Modloader/app/structs/RecordXboxDVRAction.h>

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
