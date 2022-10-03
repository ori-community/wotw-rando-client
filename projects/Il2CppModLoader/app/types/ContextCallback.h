#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ContextCallback {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ContextCallback__Class** type_info;
        inline app::ContextCallback__Class* get_class() {
            return il2cpp::get_class<app::ContextCallback__Class>(type_info, "System.Threading", "ContextCallback");
        }
        inline app::ContextCallback* create() {
            return il2cpp::create_object<app::ContextCallback>(get_class());
        }
    } // namespace ContextCallback
} // namespace app::classes::types
