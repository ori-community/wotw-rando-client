#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SimpleAsyncCallback {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SimpleAsyncCallback__Class** type_info;
        inline app::SimpleAsyncCallback__Class* get_class() {
            return il2cpp::get_class<app::SimpleAsyncCallback__Class>(type_info, "System.Net", "SimpleAsyncCallback");
        }
        inline app::SimpleAsyncCallback* create() {
            return il2cpp::create_object<app::SimpleAsyncCallback>(get_class());
        }
    } // namespace SimpleAsyncCallback
} // namespace app::classes::types
