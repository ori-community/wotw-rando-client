#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ByteUberState.h>
#include <Modloader/app/structs/IUberStateGroup.h>
#include <Modloader/app/structs/NamedValue_1_System_Byte___Array.h>
#include <Modloader/app/structs/Nullable_1_Single_.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/UberID.h>

namespace app::classes::Moon::ByteUberState {
    IL2CPP_REGISTER_METHOD(0x002FB930, app::UberID*, get_StateID, app::ByteUberState* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB9B0, app::IUberStateGroup*, get_UberStateGroup, app::ByteUberState* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01B5FF90, app::UberID*, get_GroupID, app::ByteUberState* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01B60080, uint8_t, get_Value, app::ByteUberState* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01B601C0, void, set_Value, app::ByteUberState* this_ptr, uint8_t value)
    IL2CPP_REGISTER_METHOD(0x004F4CE0, uint8_t, get_DefaultByteValue, app::ByteUberState* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004F4CF0, void, set_DefaultByteValue, app::ByteUberState* this_ptr, uint8_t value)
    IL2CPP_REGISTER_METHOD(0x01B5FE20, app::NamedValue_1_System_Byte___Array*, get_Options, app::ByteUberState* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00BAB250, app::String*, get_Name, app::ByteUberState* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01B60280, void, Initialize, app::ByteUberState* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01B60290, app::String*, ToString, app::ByteUberState* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01B60370, float, get_GenericValue, app::ByteUberState* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01B60390, void, set_GenericValue, app::ByteUberState* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x01A66990, app::Nullable_1_Single_, get_VolitileGenericOverrideValue, app::ByteUberState* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01B5FF70, void, set_VolitileGenericOverrideValue, app::ByteUberState* this_ptr, app::Nullable_1_Single_ value)
    IL2CPP_REGISTER_METHOD(0x01B5FF80, void, ctor, app::ByteUberState* this_ptr)
} // namespace app::classes::Moon::ByteUberState
