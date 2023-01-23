#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/LinearDialogTransition__Class.h>
#include <Modloader/app/structs/LinearDialogTransition.h>

namespace app::classes::types {
    namespace LinearDialogTransition {
        namespace {
            inline app::LinearDialogTransition__Class* type_info_ref = nullptr;
        }
        inline app::LinearDialogTransition__Class** type_info = &type_info_ref;
        inline app::LinearDialogTransition__Class* get_class() {
            return il2cpp::get_class<app::LinearDialogTransition__Class>(type_info, "", "LinearDialogTransition");
        }
        inline app::LinearDialogTransition* create() {
            return il2cpp::create_object<app::LinearDialogTransition>(get_class());
        }
    } // namespace LinearDialogTransition
} // namespace app::classes::types
