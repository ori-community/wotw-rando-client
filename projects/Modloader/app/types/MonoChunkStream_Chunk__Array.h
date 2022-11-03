#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MonoChunkStream_Chunk__Array {
        namespace {
            inline app::MonoChunkStream_Chunk__Array__Class* type_info_ref = nullptr;
        }
        inline app::MonoChunkStream_Chunk__Array__Class** type_info = &type_info_ref;
        inline app::MonoChunkStream_Chunk__Array__Class* get_class() {
            return il2cpp::get_class<app::MonoChunkStream_Chunk__Array__Class>(type_info, "System.Net", "MonoChunkStream+Chunk[]");
        }
        inline app::MonoChunkStream_Chunk__Array* create() {
            return il2cpp::create_object<app::MonoChunkStream_Chunk__Array>(get_class());
        }
    } // namespace MonoChunkStream_Chunk__Array
} // namespace app::classes::types
