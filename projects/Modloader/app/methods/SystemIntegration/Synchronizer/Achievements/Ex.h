#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/IEnumerable_1_List_1_System_Object_.h>
#include <Modloader/app/structs/IEnumerable_1_System_Object_.h>
#include <Modloader/app/structs/IEnumerator_1_System_Object_.h>
#include <Modloader/app/structs/IEnumerable_1_List_1_System_String_.h>
#include <Modloader/app/structs/IEnumerable_1_System_String_.h>

namespace app::classes::SystemIntegration::Synchronizer::Achievements::Ex {
    IL2CPP_REGISTER_METHOD(0x00E7DDB0, app::IEnumerable_1_List_1_System_Object_*, Chunk_1, (app::IEnumerable_1_System_Object_ * values, int32_t chunk_size))
    IL2CPP_REGISTER_METHOD(0x00E7DDB0, app::IEnumerable_1_System_Object_*, GetChunk, (app::IEnumerator_1_System_Object_ * enumerator, int32_t chunk_size))
    IL2CPP_REGISTER_METHOD(0x00E7DDB0, app::IEnumerable_1_List_1_System_String_*, Chunk_2, (app::IEnumerable_1_System_String_ * values, int32_t chunk_size))
    IL2CPP_REGISTER_METHODINFO(0x0472C320, Ex_Chunk_1__MethodInfo)
} // namespace app::classes::SystemIntegration::Synchronizer::Achievements::Ex
