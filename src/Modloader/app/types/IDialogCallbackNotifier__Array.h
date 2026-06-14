#pragma once
#include <Modloader/app/structs/IDialogCallbackNotifier__Array.h>
#include <Modloader/app/structs/IDialogCallbackNotifier__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IDialogCallbackNotifier__Array {
        inline app::IDialogCallbackNotifier__Array__Class** type_info() {
            static app::IDialogCallbackNotifier__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::IDialogCallbackNotifier__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::IDialogCallbackNotifier__Array__Class* get_class() {
            return il2cpp::get_class<app::IDialogCallbackNotifier__Array__Class>(type_info(), "", "IDialogCallbackNotifier[]");
        }
        inline app::IDialogCallbackNotifier__Array* create() {
            return il2cpp::create_object<app::IDialogCallbackNotifier__Array>(get_class());
        }
    } // namespace IDialogCallbackNotifier__Array
} // namespace app::classes::types
