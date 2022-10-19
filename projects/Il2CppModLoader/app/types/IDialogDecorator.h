#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IDialogDecorator {
        inline app::IDialogDecorator__Class** type_info = (app::IDialogDecorator__Class**)(modloader::win::memory::resolve_rva(0x04726920));
        inline app::IDialogDecorator__Class* get_class() {
            return il2cpp::get_class<app::IDialogDecorator__Class>(type_info, "", "IDialogDecorator");
        }
        inline app::IDialogDecorator__Array* create_array(int size) {
            return il2cpp::array_new<app::IDialogDecorator__Array>(get_class(), size);
        }
        inline app::IDialogDecorator__Array* create_array(const std::vector<app::IDialogDecorator*>& items) {
            return il2cpp::array_new<app::IDialogDecorator__Array>(get_class(), items);
        }
    } // namespace IDialogDecorator
} // namespace app::classes::types
