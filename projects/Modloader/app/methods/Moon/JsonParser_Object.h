#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/JsonParser_Object__Boxed.h>
#include <Modloader/app/structs/JsonParser.h>
#include <Modloader/app/structs/Nullable_1_Moon_JsonParser_Slot_.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/String__Array.h>

namespace app::classes::Moon::JsonParser_Object {
    IL2CPP_REGISTER_METHOD(0x002458B0, void, ctor, (app::JsonParser_Object__Boxed * this_ptr, app::JsonParser* parser))
    IL2CPP_REGISTER_METHOD(0x00245960, app::Nullable_1_Moon_JsonParser_Slot_, TryGetSlot, (app::JsonParser_Object__Boxed * this_ptr, app::String__Array* known_keys, int32_t* known_key_index, app::String** key))
    IL2CPP_REGISTER_METHOD(0x002459A0, void, Dispose, (app::JsonParser_Object__Boxed * this_ptr))
} // namespace app::classes::Moon::JsonParser_Object
