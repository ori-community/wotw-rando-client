#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IOAsyncCallback {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IOAsyncCallback__Class** type_info;
        inline app::IOAsyncCallback__Class* get_class() {
            return il2cpp::get_class<app::IOAsyncCallback__Class>(type_info, "System", "IOAsyncCallback");
        }
        inline app::IOAsyncCallback* create() {
            return il2cpp::create_object<app::IOAsyncCallback>(get_class());
        }
    } // namespace IOAsyncCallback
} // namespace app::classes::types
