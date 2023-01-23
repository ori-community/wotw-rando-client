#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ShowHintAction__Class.h>
#include <Modloader/app/structs/ShowHintAction.h>

namespace app::classes::types {
    namespace ShowHintAction {
        namespace {
            inline app::ShowHintAction__Class* type_info_ref = nullptr;
        }
        inline app::ShowHintAction__Class** type_info = &type_info_ref;
        inline app::ShowHintAction__Class* get_class() {
            return il2cpp::get_class<app::ShowHintAction__Class>(type_info, "", "ShowHintAction");
        }
        inline app::ShowHintAction* create() {
            return il2cpp::create_object<app::ShowHintAction>(get_class());
        }
    } // namespace ShowHintAction
} // namespace app::classes::types
