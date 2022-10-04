#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IAsyncResult {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IAsyncResult__Class** type_info;
        inline app::IAsyncResult__Class* get_class() {
            return il2cpp::get_class<app::IAsyncResult__Class>(type_info, "System", "IAsyncResult");
        }
        inline app::IAsyncResult* create() {
            return il2cpp::create_object<app::IAsyncResult>(get_class());
        }
    } // namespace IAsyncResult
} // namespace app::classes::types
