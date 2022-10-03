#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ObjectDisposedException {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ObjectDisposedException__Class** type_info;
        inline app::ObjectDisposedException__Class* get_class() {
            return il2cpp::get_class<app::ObjectDisposedException__Class>(type_info, "System", "ObjectDisposedException");
        }
        inline app::ObjectDisposedException* create() {
            return il2cpp::create_object<app::ObjectDisposedException>(get_class());
        }
    } // namespace ObjectDisposedException
} // namespace app::classes::types
