#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SimpleAsyncResult {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SimpleAsyncResult__Class** type_info;
        inline app::SimpleAsyncResult__Class* get_class() {
            return il2cpp::get_class<app::SimpleAsyncResult__Class>(type_info, "System.Net", "SimpleAsyncResult");
        }
        inline app::SimpleAsyncResult* create() {
            return il2cpp::create_object<app::SimpleAsyncResult>(get_class());
        }
    } // namespace SimpleAsyncResult
} // namespace app::classes::types
