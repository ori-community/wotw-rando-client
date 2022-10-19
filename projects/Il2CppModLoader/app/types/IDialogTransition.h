#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IDialogTransition {
        inline app::IDialogTransition__Class** type_info = (app::IDialogTransition__Class**)(modloader::win::memory::resolve_rva(0x04745C80));
        inline app::IDialogTransition__Class* get_class() {
            return il2cpp::get_class<app::IDialogTransition__Class>(type_info, "", "IDialogTransition");
        }
        inline app::IDialogTransition__Array* create_array(int size) {
            return il2cpp::array_new<app::IDialogTransition__Array>(get_class(), size);
        }
        inline app::IDialogTransition__Array* create_array(const std::vector<app::IDialogTransition*>& items) {
            return il2cpp::array_new<app::IDialogTransition__Array>(get_class(), items);
        }
    } // namespace IDialogTransition
} // namespace app::classes::types
