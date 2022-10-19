#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace QuestsController_QueuedQuestMessage__Array {
        namespace {
            inline app::QuestsController_QueuedQuestMessage__Array__Class* type_info_ref = nullptr;
        }
        inline app::QuestsController_QueuedQuestMessage__Array__Class** type_info = &type_info_ref;
        inline app::QuestsController_QueuedQuestMessage__Array__Class* get_class() {
            return il2cpp::get_class<app::QuestsController_QueuedQuestMessage__Array__Class>(type_info, "", "QuestsController+QueuedQuestMessage[]");
        }
        inline app::QuestsController_QueuedQuestMessage__Array* create() {
            return il2cpp::create_object<app::QuestsController_QueuedQuestMessage__Array>(get_class());
        }
    } // namespace QuestsController_QueuedQuestMessage__Array
} // namespace app::classes::types
