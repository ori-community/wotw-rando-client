#pragma once
#include <Modloader/app/structs/IDialogDecorator__Array.h>
#include <Modloader/app/structs/IDialogDecorator__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IDialogDecorator__Array {
        inline app::IDialogDecorator__Array__Class** type_info() {
            static app::IDialogDecorator__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::IDialogDecorator__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::IDialogDecorator__Array__Class* get_class() {
            return il2cpp::get_class<app::IDialogDecorator__Array__Class>(type_info(), "", "IDialogDecorator[]");
        }
        inline app::IDialogDecorator__Array* create() {
            return il2cpp::create_object<app::IDialogDecorator__Array>(get_class());
        }
    } // namespace IDialogDecorator__Array
} // namespace app::classes::types
