#pragma once
#include <Modloader/app/structs/ShowStoryTextAction.h>
#include <Modloader/app/structs/ShowStoryTextAction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShowStoryTextAction {
        inline app::ShowStoryTextAction__Class** type_info() {
            static app::ShowStoryTextAction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ShowStoryTextAction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ShowStoryTextAction__Class* get_class() {
            return il2cpp::get_class<app::ShowStoryTextAction__Class>(type_info(), "", "ShowStoryTextAction");
        }
        inline app::ShowStoryTextAction* create() {
            return il2cpp::create_object<app::ShowStoryTextAction>(get_class());
        }
    } // namespace ShowStoryTextAction
} // namespace app::classes::types
