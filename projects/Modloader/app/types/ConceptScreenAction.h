#pragma once
#include <Modloader/app/structs/ConceptScreenAction.h>
#include <Modloader/app/structs/ConceptScreenAction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ConceptScreenAction {
        inline app::ConceptScreenAction__Class** type_info() {
            static app::ConceptScreenAction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ConceptScreenAction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ConceptScreenAction__Class* get_class() {
            return il2cpp::get_class<app::ConceptScreenAction__Class>(type_info(), "", "ConceptScreenAction");
        }
        inline app::ConceptScreenAction* create() {
            return il2cpp::create_object<app::ConceptScreenAction>(get_class());
        }
    } // namespace ConceptScreenAction
} // namespace app::classes::types
