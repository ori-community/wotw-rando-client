#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/IDialogTransition__Array__Class.h>
#include <Modloader/app/structs/IDialogTransition__Array.h>

namespace app::classes::types {
    namespace IDialogTransition__Array {
        namespace {
            inline app::IDialogTransition__Array__Class* type_info_ref = nullptr;
        }
        inline app::IDialogTransition__Array__Class** type_info = &type_info_ref;
        inline app::IDialogTransition__Array__Class* get_class() {
            return il2cpp::get_class<app::IDialogTransition__Array__Class>(type_info, "", "IDialogTransition[]");
        }
        inline app::IDialogTransition__Array* create() {
            return il2cpp::create_object<app::IDialogTransition__Array>(get_class());
        }
    } // namespace IDialogTransition__Array
} // namespace app::classes::types
