#pragma once
#include <Modloader/app/structs/MonoChunkStream_Chunk__Array.h>
#include <Modloader/app/structs/MonoChunkStream_Chunk__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MonoChunkStream_Chunk__Array {
        inline app::MonoChunkStream_Chunk__Array__Class** type_info() {
            static app::MonoChunkStream_Chunk__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MonoChunkStream_Chunk__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MonoChunkStream_Chunk__Array__Class* get_class() {
            return il2cpp::get_class<app::MonoChunkStream_Chunk__Array__Class>(type_info(), "System.Net", "MonoChunkStream+Chunk[]");
        }
        inline app::MonoChunkStream_Chunk__Array* create() {
            return il2cpp::create_object<app::MonoChunkStream_Chunk__Array>(get_class());
        }
    } // namespace MonoChunkStream_Chunk__Array
} // namespace app::classes::types
