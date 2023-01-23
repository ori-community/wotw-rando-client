#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ButtonDialogTransition__Class.h>
#include <Modloader/app/structs/ButtonDialogTransition.h>

namespace app::classes::types {
    namespace ButtonDialogTransition {
        namespace {
            inline app::ButtonDialogTransition__Class* type_info_ref = nullptr;
        }
        inline app::ButtonDialogTransition__Class** type_info = &type_info_ref;
        inline app::ButtonDialogTransition__Class* get_class() {
            return il2cpp::get_class<app::ButtonDialogTransition__Class>(type_info, "", "ButtonDialogTransition");
        }
        inline app::ButtonDialogTransition* create() {
            return il2cpp::create_object<app::ButtonDialogTransition>(get_class());
        }
    } // namespace ButtonDialogTransition
} // namespace app::classes::types
