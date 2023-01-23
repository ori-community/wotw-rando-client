#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/QuestDetailsUI__Class.h>
#include <Modloader/app/structs/QuestDetailsUI.h>

namespace app::classes::types {
    namespace QuestDetailsUI {
        namespace {
            inline app::QuestDetailsUI__Class* type_info_ref = nullptr;
        }
        inline app::QuestDetailsUI__Class** type_info = &type_info_ref;
        inline app::QuestDetailsUI__Class* get_class() {
            return il2cpp::get_class<app::QuestDetailsUI__Class>(type_info, "", "QuestDetailsUI");
        }
        inline app::QuestDetailsUI* create() {
            return il2cpp::create_object<app::QuestDetailsUI>(get_class());
        }
    } // namespace QuestDetailsUI
} // namespace app::classes::types
