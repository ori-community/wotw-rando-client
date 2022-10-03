#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ResolveEventArgs {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ResolveEventArgs__Class** type_info;
        inline app::ResolveEventArgs__Class* get_class() {
            return il2cpp::get_class<app::ResolveEventArgs__Class>(type_info, "System", "ResolveEventArgs");
        }
        inline app::ResolveEventArgs* create() {
            return il2cpp::create_object<app::ResolveEventArgs>(get_class());
        }
    } // namespace ResolveEventArgs
} // namespace app::classes::types
