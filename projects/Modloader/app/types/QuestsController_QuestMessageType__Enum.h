#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/QuestsController_QuestMessageType__Enum__Class.h>
#include <Modloader/app/structs/QuestsController_QuestMessageType__Enum.h>

namespace app::classes::types {
    namespace QuestsController_QuestMessageType__Enum {
        namespace {
            inline app::QuestsController_QuestMessageType__Enum__Class* type_info_ref = nullptr;
        }
        inline app::QuestsController_QuestMessageType__Enum__Class** type_info = &type_info_ref;
        inline app::QuestsController_QuestMessageType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::QuestsController_QuestMessageType__Enum__Class>(type_info, "", "QuestsController", "QuestMessageType");
        }
        inline app::QuestsController_QuestMessageType__Enum* create() {
            return il2cpp::create_object<app::QuestsController_QuestMessageType__Enum>(get_class());
        }
    } // namespace QuestsController_QuestMessageType__Enum
} // namespace app::classes::types
