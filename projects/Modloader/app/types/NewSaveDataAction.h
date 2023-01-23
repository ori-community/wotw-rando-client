#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/NewSaveDataAction__Class.h>
#include <Modloader/app/structs/NewSaveDataAction.h>

namespace app::classes::types {
    namespace NewSaveDataAction {
        namespace {
            inline app::NewSaveDataAction__Class* type_info_ref = nullptr;
        }
        inline app::NewSaveDataAction__Class** type_info = &type_info_ref;
        inline app::NewSaveDataAction__Class* get_class() {
            return il2cpp::get_class<app::NewSaveDataAction__Class>(type_info, "", "NewSaveDataAction");
        }
        inline app::NewSaveDataAction* create() {
            return il2cpp::create_object<app::NewSaveDataAction>(get_class());
        }
    } // namespace NewSaveDataAction
} // namespace app::classes::types
