#pragma once
#include <Modloader/app/structs/RecordXboxDVRAction.h>
#include <Modloader/app/structs/RecordXboxDVRAction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RecordXboxDVRAction {
        inline app::RecordXboxDVRAction__Class** type_info() {
            static app::RecordXboxDVRAction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RecordXboxDVRAction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RecordXboxDVRAction__Class* get_class() {
            return il2cpp::get_class<app::RecordXboxDVRAction__Class>(type_info(), "", "RecordXboxDVRAction");
        }
        inline app::RecordXboxDVRAction* create() {
            return il2cpp::create_object<app::RecordXboxDVRAction>(get_class());
        }
    } // namespace RecordXboxDVRAction
} // namespace app::classes::types
