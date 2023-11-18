#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/JsonParser_Array__Boxed.h>
#include <Modloader/app/structs/JsonParser.h>
#include <Modloader/app/structs/Nullable_1_Moon_JsonParser_Slot_.h>

namespace app::classes::Moon::JsonParser_Array {
    IL2CPP_REGISTER_METHOD(0x002458B0, void, ctor, (app::JsonParser_Array__Boxed * this_ptr, app::JsonParser* parser))
    IL2CPP_REGISTER_METHOD(0x00245900, app::Nullable_1_Moon_JsonParser_Slot_, TryGetSlot, (app::JsonParser_Array__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00245930, void, Dispose, (app::JsonParser_Array__Boxed * this_ptr))
} // namespace app::classes::Moon::JsonParser_Array
