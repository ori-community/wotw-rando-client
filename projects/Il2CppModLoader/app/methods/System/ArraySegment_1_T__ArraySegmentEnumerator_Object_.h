#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::ArraySegment_1_T__ArraySegmentEnumerator_Object_ {
    IL2CPP_REGISTER_METHOD(0x02AD7040, app::Object *, get_Current, (app::ArraySegment_1_T_ArraySegmentEnumerator_Object_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0471B178, ArraySegment_1_T_ArraySegmentEnumerator_Object__get_Current__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01CFFD20, app::Object *, IEnumerator_get_Current, (app::ArraySegment_1_T_ArraySegmentEnumerator_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01A70D80, void, ctor, (app::ArraySegment_1_T_ArraySegmentEnumerator_Object_ * this_ptr, app::ArraySegment_1_Object_ array_segment))
    IL2CPP_REGISTER_METHOD(0x01A70DD0, bool, MoveNext, (app::ArraySegment_1_T_ArraySegmentEnumerator_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01A70F90, void, IEnumerator_Reset, (app::ArraySegment_1_T_ArraySegmentEnumerator_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Dispose, (app::ArraySegment_1_T_ArraySegmentEnumerator_Object_ * this_ptr))
}
