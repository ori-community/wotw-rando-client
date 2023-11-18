#pragma once
#include <Modloader/app/structs/IDialogTransition.h>
#include <Modloader/app/structs/IDialogTransition__Array.h>
#include <Modloader/app/structs/IDialogTransition__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IDialogTransition {
        inline app::IDialogTransition__Class** type_info() {
            static app::IDialogTransition__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IDialogTransition__Class**)(modloader::win::memory::resolve_rva(0x04745C80));
            }
            return cache;
        }
        inline app::IDialogTransition__Class* get_class() {
            return il2cpp::get_class<app::IDialogTransition__Class>(type_info(), "", "IDialogTransition");
        }
        inline app::IDialogTransition__Array* create_array(int size) {
            return il2cpp::array_new<app::IDialogTransition__Array>(get_class(), size);
        }
        inline app::IDialogTransition__Array* create_array(const std::vector<app::IDialogTransition*>& items) {
            return il2cpp::array_new<app::IDialogTransition__Array>(get_class(), items);
        }
    } // namespace IDialogTransition
} // namespace app::classes::types
