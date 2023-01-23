#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/AkVertexArray.h>
#include <Modloader/app/structs/AkVertex.h>

namespace app::classes::AkVertexArray {
    IL2CPP_REGISTER_METHOD(0x027028B0, void, ctor, (app::AkVertexArray * this_ptr, int32_t count))
    IL2CPP_REGISTER_METHOD(0x02702940, int32_t, get_StructureSize, (app::AkVertexArray * this_ptr))
    IL2CPP_REGISTER_METHOD(0x027029D0, void, DefaultConstructAtIntPtr, (app::AkVertexArray * this_ptr, void* address))
    IL2CPP_REGISTER_METHOD(0x02702A70, app::AkVertex*, CreateNewReferenceFromIntPtr, (app::AkVertexArray * this_ptr, void* address))
    IL2CPP_REGISTER_METHOD(0x02702BC0, void, CloneIntoReferenceFromIntPtr, (app::AkVertexArray * this_ptr, void* address, app::AkVertex* other))
} // namespace app::classes::AkVertexArray
