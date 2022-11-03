#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Collections::BitArray_BitArrayEnumeratorSimple {
    IL2CPP_REGISTER_METHOD(0x0201E7A0, void, ctor, (app::BitArray_BitArrayEnumeratorSimple * this_ptr, app::BitArray* bitarray))
    IL2CPP_REGISTER_METHOD(0x0173F610, app::Object*, Clone, (app::BitArray_BitArrayEnumeratorSimple * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0201E7D0, bool, MoveNext, (app::BitArray_BitArrayEnumeratorSimple * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0471DEA8, BitArray_BitArrayEnumeratorSimple_MoveNext__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0201E900, app::Object*, get_Current, (app::BitArray_BitArrayEnumeratorSimple * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04772560, BitArray_BitArrayEnumeratorSimple_get_Current__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0201EA30, void, Reset, (app::BitArray_BitArrayEnumeratorSimple * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04741A18, BitArray_BitArrayEnumeratorSimple_Reset__MethodInfo)
} // namespace app::classes::System::Collections::BitArray_BitArrayEnumeratorSimple
