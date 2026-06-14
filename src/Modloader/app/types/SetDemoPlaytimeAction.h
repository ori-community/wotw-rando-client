#pragma once
#include <Modloader/app/structs/SetDemoPlaytimeAction.h>
#include <Modloader/app/structs/SetDemoPlaytimeAction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SetDemoPlaytimeAction {
        inline app::SetDemoPlaytimeAction__Class** type_info() {
            static app::SetDemoPlaytimeAction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SetDemoPlaytimeAction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SetDemoPlaytimeAction__Class* get_class() {
            return il2cpp::get_class<app::SetDemoPlaytimeAction__Class>(type_info(), "", "SetDemoPlaytimeAction");
        }
        inline app::SetDemoPlaytimeAction* create() {
            return il2cpp::create_object<app::SetDemoPlaytimeAction>(get_class());
        }
    } // namespace SetDemoPlaytimeAction
} // namespace app::classes::types
