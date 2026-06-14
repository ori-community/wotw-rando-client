#pragma once
#include <Modloader/app/structs/QuestsController_QuestMessageType__Enum.h>
#include <Modloader/app/structs/QuestsController_QuestMessageType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace QuestsController_QuestMessageType__Enum {
        inline app::QuestsController_QuestMessageType__Enum__Class** type_info() {
            static app::QuestsController_QuestMessageType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::QuestsController_QuestMessageType__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::QuestsController_QuestMessageType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::QuestsController_QuestMessageType__Enum__Class>(type_info(), "", "QuestsController", "QuestMessageType");
        }
        inline app::QuestsController_QuestMessageType__Enum* create() {
            return il2cpp::create_object<app::QuestsController_QuestMessageType__Enum>(get_class());
        }
    } // namespace QuestsController_QuestMessageType__Enum
} // namespace app::classes::types
