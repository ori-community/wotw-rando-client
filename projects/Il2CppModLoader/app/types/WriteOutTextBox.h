#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace WriteOutTextBox {
        namespace {
            inline app::WriteOutTextBox__Class* type_info_ref = nullptr;
        }
        inline app::WriteOutTextBox__Class** type_info = &type_info_ref;
        inline app::WriteOutTextBox__Class* get_class() {
            return il2cpp::get_class<app::WriteOutTextBox__Class>(type_info, "", "WriteOutTextBox");
        }
        inline app::WriteOutTextBox* create() {
            return il2cpp::create_object<app::WriteOutTextBox>(get_class());
        }
    } // namespace WriteOutTextBox
} // namespace app::classes::types
