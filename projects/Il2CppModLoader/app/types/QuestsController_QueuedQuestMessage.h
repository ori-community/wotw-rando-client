#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace QuestsController_QueuedQuestMessage {
        namespace {
            app::QuestsController_QueuedQuestMessage__Class* type_info_ref = nullptr;
        }
        app::QuestsController_QueuedQuestMessage__Class** type_info = &type_info_ref;
        inline app::QuestsController_QueuedQuestMessage__Class* get_class() {
            return il2cpp::get_nested_class<app::QuestsController_QueuedQuestMessage__Class>(type_info, "", "QuestsController", "QueuedQuestMessage");
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
        inline app::QuestsController_QueuedQuestMessage__Array* create_array(const std::vector<app::QuestsController_QueuedQuestMessage__Boxed>& items) {
            return il2cpp::array_new<app::QuestsController_QueuedQuestMessage__Array>(get_class(), items);
        }
    } // namespace QuestsController_QueuedQuestMessage
} // namespace app::classes::types
