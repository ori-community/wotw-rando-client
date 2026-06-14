#pragma once
#include <Modloader/app/structs/QuestsController_QueuedQuestMessage.h>
#include <Modloader/app/structs/QuestsController_QueuedQuestMessage__Array.h>
#include <Modloader/app/structs/QuestsController_QueuedQuestMessage__Boxed.h>
#include <Modloader/app/structs/QuestsController_QueuedQuestMessage__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace QuestsController_QueuedQuestMessage {
        inline app::QuestsController_QueuedQuestMessage__Class** type_info() {
            static app::QuestsController_QueuedQuestMessage__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::QuestsController_QueuedQuestMessage__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::QuestsController_QueuedQuestMessage__Class* get_class() {
            return il2cpp::get_nested_class<app::QuestsController_QueuedQuestMessage__Class>(type_info(), "", "QuestsController", "QueuedQuestMessage");
        }
        inline app::QuestsController_QueuedQuestMessage* create() {
            return il2cpp::create_object<app::QuestsController_QueuedQuestMessage>(get_class());
        }
        inline app::QuestsController_QueuedQuestMessage__Boxed* box(app::QuestsController_QueuedQuestMessage value) {
            return il2cpp::box_value<app::QuestsController_QueuedQuestMessage__Boxed>(get_class(), value);
        }
        inline app::QuestsController_QueuedQuestMessage__Array* create_array(int size) {
            return il2cpp::array_new<app::QuestsController_QueuedQuestMessage__Array>(get_class(), size);
        }
        inline app::QuestsController_QueuedQuestMessage__Array* create_array(const std::vector<app::QuestsController_QueuedQuestMessage>& items) {
            return il2cpp::array_new<app::QuestsController_QueuedQuestMessage__Array>(get_class(), items);
        }
    } // namespace QuestsController_QueuedQuestMessage
} // namespace app::classes::types
