#pragma once
#include <Modloader/app/structs/INamedPipeServer.h>
#include <Modloader/app/structs/INamedPipeServer__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace INamedPipeServer {
        inline app::INamedPipeServer__Class** type_info() {
            static app::INamedPipeServer__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::INamedPipeServer__Class**)(modloader::win::memory::resolve_rva(0x0473A458));
            }
            return cache;
        }
        inline app::INamedPipeServer__Class* get_class() {
            return il2cpp::get_class<app::INamedPipeServer__Class>(type_info(), "System.IO.Pipes", "INamedPipeServer");
        }
    } // namespace INamedPipeServer
} // namespace app::classes::types
