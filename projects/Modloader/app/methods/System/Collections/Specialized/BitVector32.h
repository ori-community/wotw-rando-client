#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/BitVector32__Boxed.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/BitVector32.h>

namespace app::classes::System::Collections::Specialized::BitVector32 {
    IL2CPP_REGISTER_METHOD(0x001EF440, bool, get_Item, (app::BitVector32__Boxed * this_ptr, int32_t bit))
    IL2CPP_REGISTER_METHOD(0x001EF460, void, set_Item, (app::BitVector32__Boxed * this_ptr, int32_t bit, bool value))
    IL2CPP_REGISTER_METHOD(0x024925D0, int32_t, CreateMask_1, ())
    IL2CPP_REGISTER_METHOD(0x02492640, int32_t, CreateMask_2, (int32_t previous))
    IL2CPP_REGISTER_METHODINFO(0x0473F300, BitVector32_CreateMask_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x001EF480, bool, Equals, (app::BitVector32__Boxed * this_ptr, app::Object* o))
    IL2CPP_REGISTER_METHOD(0x001EF550, int32_t, GetHashCode, (app::BitVector32__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02492720, app::String*, ToString_1, (app::BitVector32 value))
    IL2CPP_REGISTER_METHOD(0x001EF5F0, app::String*, ToString_2, (app::BitVector32__Boxed * this_ptr))
} // namespace app::classes::System::Collections::Specialized::BitVector32
