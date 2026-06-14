#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BitArray.h>
#include <Modloader/app/structs/BitArray_BitArrayEnumeratorSimple.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Collections::BitArray_BitArrayEnumeratorSimple {
    IL2CPP_REGISTER_METHOD(0x0201E7A0, void, ctor, app::BitArray_BitArrayEnumeratorSimple* this_ptr, app::BitArray* bitarray)
    IL2CPP_REGISTER_METHOD(0x0173F610, app::Object*, Clone, app::BitArray_BitArrayEnumeratorSimple* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0201E7D0, bool, MoveNext, app::BitArray_BitArrayEnumeratorSimple* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0201E900, app::Object*, get_Current, app::BitArray_BitArrayEnumeratorSimple* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0201EA30, void, Reset, app::BitArray_BitArrayEnumeratorSimple* this_ptr)
} // namespace app::classes::System::Collections::BitArray_BitArrayEnumeratorSimple
