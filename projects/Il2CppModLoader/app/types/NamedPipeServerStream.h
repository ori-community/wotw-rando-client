#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace NamedPipeServerStream {
        extern IL2CPP_MODLOADER_DLLEXPORT app::NamedPipeServerStream__Class** type_info;
        inline app::NamedPipeServerStream__Class* get_class() {
            return il2cpp::get_class<app::NamedPipeServerStream__Class>(type_info, "System.IO.Pipes", "NamedPipeServerStream");
        }
        inline app::NamedPipeServerStream* create() {
            return il2cpp::create_object<app::NamedPipeServerStream>(get_class());
        }
    } // namespace NamedPipeServerStream
} // namespace app::classes::types
