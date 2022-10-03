#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace NewSaveDataAction {
        namespace {
            app::NewSaveDataAction__Class* type_info_ref = nullptr;
        }
        app::NewSaveDataAction__Class** type_info = &type_info_ref;
        inline app::NewSaveDataAction__Class* get_class() {
            return il2cpp::get_class<app::NewSaveDataAction__Class>(type_info, "", "NewSaveDataAction");
        }
        inline app::NewSaveDataAction* create() {
            return il2cpp::create_object<app::NewSaveDataAction>(get_class());
        }
    } // namespace NewSaveDataAction
} // namespace app::classes::types
