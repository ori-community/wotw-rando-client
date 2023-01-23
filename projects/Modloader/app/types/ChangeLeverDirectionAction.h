#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ChangeLeverDirectionAction__Class.h>
#include <Modloader/app/structs/ChangeLeverDirectionAction.h>

namespace app::classes::types {
    namespace ChangeLeverDirectionAction {
        namespace {
            inline app::ChangeLeverDirectionAction__Class* type_info_ref = nullptr;
        }
        inline app::ChangeLeverDirectionAction__Class** type_info = &type_info_ref;
        inline app::ChangeLeverDirectionAction__Class* get_class() {
            return il2cpp::get_class<app::ChangeLeverDirectionAction__Class>(type_info, "", "ChangeLeverDirectionAction");
        }
        inline app::ChangeLeverDirectionAction* create() {
            return il2cpp::create_object<app::ChangeLeverDirectionAction>(get_class());
        }
    } // namespace ChangeLeverDirectionAction
} // namespace app::classes::types
