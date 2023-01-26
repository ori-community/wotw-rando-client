#pragma once
#include <Modloader/app/structs/PrewarmSkipAction.h>
#include <Modloader/app/structs/PrewarmSkipAction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PrewarmSkipAction {
        inline app::PrewarmSkipAction__Class** type_info() {
            static app::PrewarmSkipAction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PrewarmSkipAction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PrewarmSkipAction__Class* get_class() {
            return il2cpp::get_class<app::PrewarmSkipAction__Class>(type_info(), "", "PrewarmSkipAction");
        }
        inline app::PrewarmSkipAction* create() {
            return il2cpp::create_object<app::PrewarmSkipAction>(get_class());
        }
    } // namespace PrewarmSkipAction
} // namespace app::classes::types
