#pragma once
#include <Modloader/app/structs/MonoChunkStream.h>
#include <Modloader/app/structs/MonoChunkStream__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MonoChunkStream {
        inline app::MonoChunkStream__Class** type_info() {
            static app::MonoChunkStream__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MonoChunkStream__Class**)(modloader::win::memory::resolve_rva(0x0476A4E0));
            }
            return cache;
        }
        inline app::MonoChunkStream__Class* get_class() {
            return il2cpp::get_class<app::MonoChunkStream__Class>(type_info(), "System.Net", "MonoChunkStream");
        }
        inline app::MonoChunkStream* create() {
            return il2cpp::create_object<app::MonoChunkStream>(get_class());
        }
    } // namespace MonoChunkStream
} // namespace app::classes::types
