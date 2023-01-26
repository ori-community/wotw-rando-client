#pragma once
#include <Modloader/app/structs/ScrollUIAction.h>
#include <Modloader/app/structs/ScrollUIAction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ScrollUIAction {
        inline app::ScrollUIAction__Class** type_info() {
            static app::ScrollUIAction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ScrollUIAction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ScrollUIAction__Class* get_class() {
            return il2cpp::get_class<app::ScrollUIAction__Class>(type_info(), "", "ScrollUIAction");
        }
        inline app::ScrollUIAction* create() {
            return il2cpp::create_object<app::ScrollUIAction>(get_class());
        }
    } // namespace ScrollUIAction
} // namespace app::classes::types
