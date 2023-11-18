#pragma once
#include <Modloader/app/structs/OnObjectStartRunAction.h>
#include <Modloader/app/structs/OnObjectStartRunAction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace OnObjectStartRunAction {
        inline app::OnObjectStartRunAction__Class** type_info() {
            static app::OnObjectStartRunAction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::OnObjectStartRunAction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::OnObjectStartRunAction__Class* get_class() {
            return il2cpp::get_class<app::OnObjectStartRunAction__Class>(type_info(), "", "OnObjectStartRunAction");
        }
        inline app::OnObjectStartRunAction* create() {
            return il2cpp::create_object<app::OnObjectStartRunAction>(get_class());
        }
    } // namespace OnObjectStartRunAction
} // namespace app::classes::types
