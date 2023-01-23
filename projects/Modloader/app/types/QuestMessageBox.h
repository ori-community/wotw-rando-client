#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/QuestMessageBox__Class.h>
#include <Modloader/app/structs/QuestMessageBox.h>

namespace app::classes::types {
    namespace QuestMessageBox {
        namespace {
            inline app::QuestMessageBox__Class* type_info_ref = nullptr;
        }
        inline app::QuestMessageBox__Class** type_info = &type_info_ref;
        inline app::QuestMessageBox__Class* get_class() {
            return il2cpp::get_class<app::QuestMessageBox__Class>(type_info, "", "QuestMessageBox");
        }
        inline app::QuestMessageBox* create() {
            return il2cpp::create_object<app::QuestMessageBox>(get_class());
        }
    } // namespace QuestMessageBox
} // namespace app::classes::types
