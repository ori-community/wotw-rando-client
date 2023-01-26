#pragma once
#include <Modloader/app/structs/PrewarmBackOutAction.h>
#include <Modloader/app/structs/PrewarmBackOutAction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PrewarmBackOutAction {
        inline app::PrewarmBackOutAction__Class** type_info() {
            static app::PrewarmBackOutAction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PrewarmBackOutAction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PrewarmBackOutAction__Class* get_class() {
            return il2cpp::get_class<app::PrewarmBackOutAction__Class>(type_info(), "", "PrewarmBackOutAction");
        }
        inline app::PrewarmBackOutAction* create() {
            return il2cpp::create_object<app::PrewarmBackOutAction>(get_class());
        }
    } // namespace PrewarmBackOutAction
} // namespace app::classes::types
