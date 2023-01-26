#pragma once
#include <Modloader/app/structs/ActivateLianaTongueAction.h>
#include <Modloader/app/structs/ActivateLianaTongueAction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ActivateLianaTongueAction {
        inline app::ActivateLianaTongueAction__Class** type_info() {
            static app::ActivateLianaTongueAction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ActivateLianaTongueAction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ActivateLianaTongueAction__Class* get_class() {
            return il2cpp::get_class<app::ActivateLianaTongueAction__Class>(type_info(), "", "ActivateLianaTongueAction");
        }
        inline app::ActivateLianaTongueAction* create() {
            return il2cpp::create_object<app::ActivateLianaTongueAction>(get_class());
        }
    } // namespace ActivateLianaTongueAction
} // namespace app::classes::types
