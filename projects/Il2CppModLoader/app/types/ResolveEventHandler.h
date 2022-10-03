#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ResolveEventHandler {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ResolveEventHandler__Class** type_info;
        inline app::ResolveEventHandler__Class* get_class() {
            return il2cpp::get_class<app::ResolveEventHandler__Class>(type_info, "System", "ResolveEventHandler");
        }
        inline app::ResolveEventHandler* create() {
            return il2cpp::create_object<app::ResolveEventHandler>(get_class());
        }
    } // namespace ResolveEventHandler
} // namespace app::classes::types
