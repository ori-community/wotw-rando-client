#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/MarkSavePedestalAsUsedAction__Class.h>
#include <Modloader/app/structs/MarkSavePedestalAsUsedAction.h>

namespace app::classes::types {
    namespace MarkSavePedestalAsUsedAction {
        namespace {
            inline app::MarkSavePedestalAsUsedAction__Class* type_info_ref = nullptr;
        }
        inline app::MarkSavePedestalAsUsedAction__Class** type_info = &type_info_ref;
        inline app::MarkSavePedestalAsUsedAction__Class* get_class() {
            return il2cpp::get_class<app::MarkSavePedestalAsUsedAction__Class>(type_info, "", "MarkSavePedestalAsUsedAction");
        }
        inline app::MarkSavePedestalAsUsedAction* create() {
            return il2cpp::create_object<app::MarkSavePedestalAsUsedAction>(get_class());
        }
    } // namespace MarkSavePedestalAsUsedAction
} // namespace app::classes::types
