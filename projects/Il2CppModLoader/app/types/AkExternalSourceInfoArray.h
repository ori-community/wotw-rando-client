#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AkExternalSourceInfoArray {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AkExternalSourceInfoArray__Class** type_info;
        inline app::AkExternalSourceInfoArray__Class* get_class() {
            return il2cpp::get_class<app::AkExternalSourceInfoArray__Class>(type_info, "", "AkExternalSourceInfoArray");
        }
        inline app::AkExternalSourceInfoArray* create() {
            return il2cpp::create_object<app::AkExternalSourceInfoArray>(get_class());
        }
    } // namespace AkExternalSourceInfoArray
} // namespace app::classes::types
