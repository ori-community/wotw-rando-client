#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/NamedPipeServerStream__Class.h>
#include <Modloader/app/structs/NamedPipeServerStream.h>

namespace app::classes::types {
    namespace NamedPipeServerStream {
        inline app::NamedPipeServerStream__Class** type_info = (app::NamedPipeServerStream__Class**)(modloader::win::memory::resolve_rva(0x0477AC00));
        inline app::NamedPipeServerStream__Class* get_class() {
            return il2cpp::get_class<app::NamedPipeServerStream__Class>(type_info, "System.IO.Pipes", "NamedPipeServerStream");
        }
        inline app::NamedPipeServerStream* create() {
            return il2cpp::create_object<app::NamedPipeServerStream>(get_class());
        }
    } // namespace NamedPipeServerStream
} // namespace app::classes::types
