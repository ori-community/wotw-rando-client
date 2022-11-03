#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MonoChunkStream {
        inline app::MonoChunkStream__Class** type_info = (app::MonoChunkStream__Class**)(modloader::win::memory::resolve_rva(0x0476A4E0));
        inline app::MonoChunkStream__Class* get_class() {
            return il2cpp::get_class<app::MonoChunkStream__Class>(type_info, "System.Net", "MonoChunkStream");
        }
        inline app::MonoChunkStream* create() {
            return il2cpp::create_object<app::MonoChunkStream>(get_class());
        }
    } // namespace MonoChunkStream
} // namespace app::classes::types
