#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace fsContext {
        extern IL2CPP_MODLOADER_DLLEXPORT app::fsContext__Class** type_info;
        inline app::fsContext__Class* get_class() {
            return il2cpp::get_class<app::fsContext__Class>(type_info, "FullSerializer", "fsContext");
        }
        inline app::fsContext* create() {
            return il2cpp::create_object<app::fsContext>(get_class());
        }
    } // namespace fsContext
} // namespace app::classes::types
