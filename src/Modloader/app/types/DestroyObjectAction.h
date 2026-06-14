#pragma once
#include <Modloader/app/structs/DestroyObjectAction.h>
#include <Modloader/app/structs/DestroyObjectAction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DestroyObjectAction {
        inline app::DestroyObjectAction__Class** type_info() {
            static app::DestroyObjectAction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DestroyObjectAction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DestroyObjectAction__Class* get_class() {
            return il2cpp::get_class<app::DestroyObjectAction__Class>(type_info(), "", "DestroyObjectAction");
        }
        inline app::DestroyObjectAction* create() {
            return il2cpp::create_object<app::DestroyObjectAction>(get_class());
        }
    } // namespace DestroyObjectAction
} // namespace app::classes::types
