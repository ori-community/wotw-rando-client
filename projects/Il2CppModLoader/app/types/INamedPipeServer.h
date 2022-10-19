#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace INamedPipeServer {
        inline app::INamedPipeServer__Class** type_info = (app::INamedPipeServer__Class**)(modloader::win::memory::resolve_rva(0x0473A458));
        inline app::INamedPipeServer__Class* get_class() {
            return il2cpp::get_class<app::INamedPipeServer__Class>(type_info, "System.IO.Pipes", "INamedPipeServer");
        }
    } // namespace INamedPipeServer
} // namespace app::classes::types
