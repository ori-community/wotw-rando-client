#pragma once
#include <Modloader/app/structs/QuestsController_QueuedQuestMessage__Array.h>
#include <Modloader/app/structs/QuestsController_QueuedQuestMessage__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace QuestsController_QueuedQuestMessage__Array {
        inline app::QuestsController_QueuedQuestMessage__Array__Class** type_info() {
            static app::QuestsController_QueuedQuestMessage__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::QuestsController_QueuedQuestMessage__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::QuestsController_QueuedQuestMessage__Array__Class* get_class() {
            return il2cpp::get_class<app::QuestsController_QueuedQuestMessage__Array__Class>(type_info(), "", "QuestsController+QueuedQuestMessage[]");
        }
        inline app::QuestsController_QueuedQuestMessage__Array* create() {
            return il2cpp::create_object<app::QuestsController_QueuedQuestMessage__Array>(get_class());
        }
    } // namespace QuestsController_QueuedQuestMessage__Array
} // namespace app::classes::types
