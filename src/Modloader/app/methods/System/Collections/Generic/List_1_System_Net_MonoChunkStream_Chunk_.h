#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/List_1_System_Net_MonoChunkStream_Chunk_.h>
#include <Modloader/app/structs/List_1_T_Enumerator_System_Net_MonoChunkStream_Chunk_.h>
#include <Modloader/app/structs/MonoChunkStream_Chunk.h>

namespace app::classes::System::Collections::Generic::List_1_System_Net_MonoChunkStream_Chunk_ {
    IL2CPP_REGISTER_METHOD(0x025E81E0, void, ctor, app::List_1_System_Net_MonoChunkStream_Chunk_* this_ptr, int32_t capacity)
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, app::List_1_System_Net_MonoChunkStream_Chunk_* this_ptr, app::MonoChunkStream_Chunk* item)
    IL2CPP_REGISTER_METHOD(
        0x025F0B10,
        app::List_1_T_Enumerator_System_Net_MonoChunkStream_Chunk_,
        GetEnumerator,
        app::List_1_System_Net_MonoChunkStream_Chunk_* this_ptr
    )
} // namespace app::classes::System::Collections::Generic::List_1_System_Net_MonoChunkStream_Chunk_
