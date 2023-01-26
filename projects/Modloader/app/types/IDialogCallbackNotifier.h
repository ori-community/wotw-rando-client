#pragma once
#include <Modloader/app/structs/IDialogCallbackNotifier.h>
#include <Modloader/app/structs/IDialogCallbackNotifier__Array.h>
#include <Modloader/app/structs/IDialogCallbackNotifier__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IDialogCallbackNotifier {
        inline app::IDialogCallbackNotifier__Class** type_info() {
            static app::IDialogCallbackNotifier__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IDialogCallbackNotifier__Class**)(modloader::win::memory::resolve_rva(0x04713B00));
            }
            return cache;
        }
        inline app::IDialogCallbackNotifier__Class* get_class() {
            return il2cpp::get_class<app::IDialogCallbackNotifier__Class>(type_info(), "", "IDialogCallbackNotifier");
        }
        inline app::IDialogCallbackNotifier__Array* create_array(int size) {
            return il2cpp::array_new<app::IDialogCallbackNotifier__Array>(get_class(), size);
        }
        inline app::IDialogCallbackNotifier__Array* create_array(const std::vector<app::IDialogCallbackNotifier*>& items) {
            return il2cpp::array_new<app::IDialogCallbackNotifier__Array>(get_class(), items);
        }
    } // namespace IDialogCallbackNotifier
} // namespace app::classes::types
