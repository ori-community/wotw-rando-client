#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Context {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Context__Class** type_info;
        inline app::Context__Class* get_class() {
            return il2cpp::get_class<app::Context__Class>(type_info, "System.Runtime.Remoting.Contexts", "Context");
        }
        inline app::Context* create() {
            return il2cpp::create_object<app::Context>(get_class());
        }
    } // namespace Context
} // namespace app::classes::types
