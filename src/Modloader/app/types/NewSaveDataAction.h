#pragma once
#include <Modloader/app/structs/NewSaveDataAction.h>
#include <Modloader/app/structs/NewSaveDataAction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NewSaveDataAction {
        inline app::NewSaveDataAction__Class** type_info() {
            static app::NewSaveDataAction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::NewSaveDataAction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::NewSaveDataAction__Class* get_class() {
            return il2cpp::get_class<app::NewSaveDataAction__Class>(type_info(), "", "NewSaveDataAction");
        }
        inline app::NewSaveDataAction* create() {
            return il2cpp::create_object<app::NewSaveDataAction>(get_class());
        }
    } // namespace NewSaveDataAction
} // namespace app::classes::types
