#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace INamedPipeServer {
        extern IL2CPP_MODLOADER_DLLEXPORT app::INamedPipeServer__Class** type_info;
        inline app::INamedPipeServer__Class* get_class() {
            return il2cpp::get_class<app::INamedPipeServer__Class>(type_info, "System.IO.Pipes", "INamedPipeServer");
        }
    } // namespace INamedPipeServer
} // namespace app::classes::types
