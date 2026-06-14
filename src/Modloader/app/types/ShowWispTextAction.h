#pragma once
#include <Modloader/app/structs/ShowWispTextAction.h>
#include <Modloader/app/structs/ShowWispTextAction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShowWispTextAction {
        inline app::ShowWispTextAction__Class** type_info() {
            static app::ShowWispTextAction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ShowWispTextAction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ShowWispTextAction__Class* get_class() {
            return il2cpp::get_class<app::ShowWispTextAction__Class>(type_info(), "", "ShowWispTextAction");
        }
        inline app::ShowWispTextAction* create() {
            return il2cpp::create_object<app::ShowWispTextAction>(get_class());
        }
    } // namespace ShowWispTextAction
} // namespace app::classes::types
