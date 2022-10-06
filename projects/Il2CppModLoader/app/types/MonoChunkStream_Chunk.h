#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MonoChunkStream_Chunk {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MonoChunkStream_Chunk__Class** type_info;
        inline app::MonoChunkStream_Chunk__Class* get_class() {
            return il2cpp::get_nested_class<app::MonoChunkStream_Chunk__Class>(type_info, "System.Net", "MonoChunkStream", "Chunk");
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
