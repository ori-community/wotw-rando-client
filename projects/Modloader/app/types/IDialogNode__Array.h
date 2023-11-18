#pragma once
#include <Modloader/app/structs/IDialogNode__Array.h>
#include <Modloader/app/structs/IDialogNode__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IDialogNode__Array {
        inline app::IDialogNode__Array__Class** type_info() {
            static app::IDialogNode__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::IDialogNode__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::IDialogNode__Array__Class* get_class() {
            return il2cpp::get_class<app::IDialogNode__Array__Class>(type_info(), "", "IDialogNode[]");
        }
        inline app::IDialogNode__Array* create() {
            return il2cpp::create_object<app::IDialogNode__Array>(get_class());
        }
    } // namespace IDialogNode__Array
} // namespace app::classes::types
