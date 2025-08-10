#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IEnumerable_1_KeyValuePair_2_Moon_UberID_System_Boolean_.h>
#include <Modloader/app/structs/IEnumerable_1_KeyValuePair_2_Moon_UberID_System_Byte_.h>
#include <Modloader/app/structs/IEnumerable_1_KeyValuePair_2_Moon_UberID_System_Int32_.h>
#include <Modloader/app/structs/IEnumerable_1_KeyValuePair_2_Moon_UberID_System_Object_.h>
#include <Modloader/app/structs/IEnumerable_1_KeyValuePair_2_Moon_UberID_System_Single_.h>
#include <Modloader/app/structs/ISerializedUberState.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/UberID.h>
#include <Modloader/app/structs/UberStateArchive.h>
#include <Modloader/app/structs/UberStateHeader_UberStateType__Enum.h>
#include <Modloader/app/structs/UberStateValueGroup.h>

namespace app::classes::Moon::UberStateValueGroup {
    IL2CPP_REGISTER_METHOD(0x01B6D8A0, void, ctor, app::UberStateValueGroup* this_ptr, app::UberID* id)
    IL2CPP_REGISTER_METHOD(0x00585310, bool, get_IsInitialized, app::UberStateValueGroup* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01B6DDE0, void, set_IsInitialized, app::UberStateValueGroup* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x002FB950, app::IEnumerable_1_KeyValuePair_2_Moon_UberID_System_Object_*, get_ObjectStateMap, app::UberStateValueGroup* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBB00, app::IEnumerable_1_KeyValuePair_2_Moon_UberID_System_Boolean_*, get_BoolStateMap, app::UberStateValueGroup* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IEnumerable_1_KeyValuePair_2_Moon_UberID_System_Single_*, get_FloatStateMap, app::UberStateValueGroup* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB9B0, app::IEnumerable_1_KeyValuePair_2_Moon_UberID_System_Int32_*, get_IntStateMap, app::UberStateValueGroup* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB9D0, app::IEnumerable_1_KeyValuePair_2_Moon_UberID_System_Byte_*, get_ByteStateMap, app::UberStateValueGroup* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB930, app::UberID*, get_ID, app::UberStateValueGroup* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x01B6DE20,
        bool,
        TryGetState_1,
        app::UberStateValueGroup* this_ptr,
        app::ISerializedUberState* uber_state_descriptor,
        app::Object** uber_state
    )
    IL2CPP_REGISTER_METHOD(
        0x01B6DEF0,
        bool,
        TryGetState_2,
        app::UberStateValueGroup* this_ptr,
        app::ISerializedUberState* uber_state_descriptor,
        bool* uber_state
    )
    IL2CPP_REGISTER_METHOD(
        0x01B6DFC0,
        bool,
        TryGetState_3,
        app::UberStateValueGroup* this_ptr,
        app::ISerializedUberState* uber_state_descriptor,
        float* uber_state
    )
    IL2CPP_REGISTER_METHOD(
        0x01B6E090,
        bool,
        TryGetState_4,
        app::UberStateValueGroup* this_ptr,
        app::ISerializedUberState* uber_state_descriptor,
        int32_t* uber_state
    )
    IL2CPP_REGISTER_METHOD(
        0x01B6E160,
        bool,
        TryGetState_5,
        app::UberStateValueGroup* this_ptr,
        app::ISerializedUberState* uber_state_descriptor,
        uint8_t* uber_state
    )
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Debug, app::UberStateValueGroup* this_ptr, app::String* text)
    IL2CPP_REGISTER_METHOD(
        0x01B6E290,
        void,
        SetState_1,
        app::UberStateValueGroup* this_ptr,
        app::ISerializedUberState* uber_state_descriptor,
        app::Object* uber_state
    )
    IL2CPP_REGISTER_METHOD(0x01B6E380, void, SetState_2, app::UberStateValueGroup* this_ptr, app::ISerializedUberState* uber_state_descriptor, bool uber_state)
    IL2CPP_REGISTER_METHOD(0x01B6E480, void, SetState_3, app::UberStateValueGroup* this_ptr, app::ISerializedUberState* uber_state_descriptor, float uber_state)
    IL2CPP_REGISTER_METHOD(
        0x01B6E570,
        void,
        SetState_4,
        app::UberStateValueGroup* this_ptr,
        app::ISerializedUberState* uber_state_descriptor,
        int32_t uber_state
    )
    IL2CPP_REGISTER_METHOD(
        0x01B6E660,
        void,
        SetState_5,
        app::UberStateValueGroup* this_ptr,
        app::ISerializedUberState* uber_state_descriptor,
        uint8_t uber_state
    )
    IL2CPP_REGISTER_METHOD(0x00617EB0, void, SetDirty, app::UberStateValueGroup* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FCB00, bool, get_IsDirty, app::UberStateValueGroup* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0043D9A0, int64_t, get_HeaderSize, app::UberStateValueGroup* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01B6E760, int64_t, get_DataSize, app::UberStateValueGroup* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01B6E790, int64_t, get_FullSize, app::UberStateValueGroup* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01B6E7C0, void, SetClean, app::UberStateValueGroup* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01B6E7E0, void, CalculateDataSize, app::UberStateValueGroup* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01B6EA50, void, Save, app::UberStateValueGroup* this_ptr, app::UberStateArchive* archive)
    IL2CPP_REGISTER_METHOD(0x01B6F970, void, Load, app::UberStateValueGroup* this_ptr, app::UberStateArchive* archive, int32_t store_version)
    IL2CPP_REGISTER_METHOD(
        0x01B6FB30,
        void,
        SetStateInternal,
        app::UberStateValueGroup* this_ptr,
        app::ISerializedUberState* uber_state_descriptor,
        app::Object* uber_state
    )
    IL2CPP_REGISTER_METHOD(
        0x01B6FEF0,
        void,
        SimulateReadingType,
        app::UberStateValueGroup* this_ptr,
        app::UberStateArchive* archive,
        app::UberStateHeader_UberStateType__Enum header_type
    )
} // namespace app::classes::Moon::UberStateValueGroup
