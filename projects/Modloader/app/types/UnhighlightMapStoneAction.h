#pragma once
#include <Modloader/app/structs/UnhighlightMapStoneAction.h>
#include <Modloader/app/structs/UnhighlightMapStoneAction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UnhighlightMapStoneAction {
        inline app::UnhighlightMapStoneAction__Class** type_info() {
            static app::UnhighlightMapStoneAction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UnhighlightMapStoneAction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UnhighlightMapStoneAction__Class* get_class() {
            return il2cpp::get_class<app::UnhighlightMapStoneAction__Class>(type_info(), "", "UnhighlightMapStoneAction");
        }
        inline app::UnhighlightMapStoneAction* create() {
            return il2cpp::create_object<app::UnhighlightMapStoneAction>(get_class());
        }
    } // namespace UnhighlightMapStoneAction
} // namespace app::classes::types
