#pragma once
#include <Modloader/app/structs/MonoChunkStream_Chunk.h>
#include <Modloader/app/structs/MonoChunkStream_Chunk__Array.h>
#include <Modloader/app/structs/MonoChunkStream_Chunk__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MonoChunkStream_Chunk {
        inline app::MonoChunkStream_Chunk__Class** type_info() {
            static app::MonoChunkStream_Chunk__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MonoChunkStream_Chunk__Class**)(modloader::win::memory::resolve_rva(0x04795F30));
            }
            return cache;
        }
        inline app::MonoChunkStream_Chunk__Class* get_class() {
            return il2cpp::get_nested_class<app::MonoChunkStream_Chunk__Class>(type_info(), "System.Net", "MonoChunkStream", "Chunk");
        }
        inline app::MonoChunkStream_Chunk* create() {
            return il2cpp::create_object<app::MonoChunkStream_Chunk>(get_class());
        }
        inline app::MonoChunkStream_Chunk__Array* create_array(int size) {
            return il2cpp::array_new<app::MonoChunkStream_Chunk__Array>(get_class(), size);
        }
        inline app::MonoChunkStream_Chunk__Array* create_array(const std::vector<app::MonoChunkStream_Chunk*>& items) {
            return il2cpp::array_new<app::MonoChunkStream_Chunk__Array>(get_class(), items);
        }
    } // namespace MonoChunkStream_Chunk
} // namespace app::classes::types
