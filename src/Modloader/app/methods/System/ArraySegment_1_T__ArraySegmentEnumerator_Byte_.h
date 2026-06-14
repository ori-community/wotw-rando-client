#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ArraySegment_1_Byte_.h>
#include <Modloader/app/structs/ArraySegment_1_T_ArraySegmentEnumerator_Byte_.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::ArraySegment_1_T__ArraySegmentEnumerator_Byte_ {
    IL2CPP_REGISTER_METHOD(0x01A70D80, void, ctor, app::ArraySegment_1_T_ArraySegmentEnumerator_Byte_* this_ptr, app::ArraySegment_1_Byte_ array_segment)
    IL2CPP_REGISTER_METHOD(0x01A70DD0, bool, MoveNext, app::ArraySegment_1_T_ArraySegmentEnumerator_Byte_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01A70DF0, uint8_t, get_Current, app::ArraySegment_1_T_ArraySegmentEnumerator_Byte_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01A70F30, app::Object*, IEnumerator_get_Current, app::ArraySegment_1_T_ArraySegmentEnumerator_Byte_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01A70F90, void, IEnumerator_Reset, app::ArraySegment_1_T_ArraySegmentEnumerator_Byte_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Dispose, app::ArraySegment_1_T_ArraySegmentEnumerator_Byte_* this_ptr)
} // namespace app::classes::System::ArraySegment_1_T__ArraySegmentEnumerator_Byte_
