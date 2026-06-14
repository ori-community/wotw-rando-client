#pragma once
#include <Modloader/app/structs/SpringSeinAction.h>
#include <Modloader/app/structs/SpringSeinAction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpringSeinAction {
        inline app::SpringSeinAction__Class** type_info() {
            static app::SpringSeinAction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SpringSeinAction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SpringSeinAction__Class* get_class() {
            return il2cpp::get_class<app::SpringSeinAction__Class>(type_info(), "", "SpringSeinAction");
        }
        inline app::SpringSeinAction* create() {
            return il2cpp::create_object<app::SpringSeinAction>(get_class());
        }
    } // namespace SpringSeinAction
} // namespace app::classes::types
