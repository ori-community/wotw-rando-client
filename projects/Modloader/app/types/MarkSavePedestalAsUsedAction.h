#pragma once
#include <Modloader/app/structs/MarkSavePedestalAsUsedAction.h>
#include <Modloader/app/structs/MarkSavePedestalAsUsedAction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MarkSavePedestalAsUsedAction {
        inline app::MarkSavePedestalAsUsedAction__Class** type_info() {
            static app::MarkSavePedestalAsUsedAction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MarkSavePedestalAsUsedAction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MarkSavePedestalAsUsedAction__Class* get_class() {
            return il2cpp::get_class<app::MarkSavePedestalAsUsedAction__Class>(type_info(), "", "MarkSavePedestalAsUsedAction");
        }
        inline app::MarkSavePedestalAsUsedAction* create() {
            return il2cpp::create_object<app::MarkSavePedestalAsUsedAction>(get_class());
        }
    } // namespace MarkSavePedestalAsUsedAction
} // namespace app::classes::types
