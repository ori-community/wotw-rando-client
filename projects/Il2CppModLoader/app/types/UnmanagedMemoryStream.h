#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UnmanagedMemoryStream {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UnmanagedMemoryStream__Class** type_info;
        inline app::UnmanagedMemoryStream__Class* get_class() {
            return il2cpp::get_class<app::UnmanagedMemoryStream__Class>(type_info, "System.IO", "UnmanagedMemoryStream");
        }
        inline app::UnmanagedMemoryStream* create() {
            return il2cpp::create_object<app::UnmanagedMemoryStream>(get_class());
        }
    } // namespace UnmanagedMemoryStream
} // namespace app::classes::types
