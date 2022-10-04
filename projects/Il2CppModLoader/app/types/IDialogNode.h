#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IDialogNode {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IDialogNode__Class** type_info;
        inline app::IDialogNode__Class* get_class() {
            return il2cpp::get_class<app::IDialogNode__Class>(type_info, "", "IDialogNode");
        }
        inline app::IDialogNode* create() {
            return il2cpp::create_object<app::IDialogNode>(get_class());
        }
        inline app::IDialogNode__Array* create_array(int size) {
            return il2cpp::array_new<app::IDialogNode__Array>(get_class(), size);
        }
    } // namespace IDialogNode
} // namespace app::classes::types
