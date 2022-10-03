#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AsyncCallback {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AsyncCallback__Class** type_info;
        inline app::AsyncCallback__Class* get_class() {
            return il2cpp::get_class<app::AsyncCallback__Class>(type_info, "System", "AsyncCallback");
        }
        inline app::AsyncCallback* create() {
            return il2cpp::create_object<app::AsyncCallback>(get_class());
        }
    } // namespace AsyncCallback
} // namespace app::classes::types
