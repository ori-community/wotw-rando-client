#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/IEnumerable_1_KeyValuePair_2_Moon_UberID_Moon_UberStateValueGroup_.h>
#include <Modloader/app/structs/ISerializedUberState.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/UberStateSaveFileHandler_LoadStatus__Enum.h>
#include <Modloader/app/structs/UberStateValueGroup.h>
#include <Modloader/app/structs/UberStateValueStore.h>

namespace app::classes::Moon::UberStateValueStore {
    IL2CPP_REGISTER_METHOD(0x00CC59E0, int32_t, get_Version, app::UberStateValueStore* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E39C80, void, set_Version, app::UberStateValueStore* this_ptr, int32_t value)
    IL2CPP_REGISTER_METHOD(0x00446970, bool, get_IsInitialized, app::UberStateValueStore* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01B70170, void, set_IsInitialized, app::UberStateValueStore* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x003FC7F0, int32_t, get_InstanceID, app::UberStateValueStore* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01B70320, void, ctor_1, app::UberStateValueStore* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01B704F0, void, ctor_2, app::UberStateValueStore* this_ptr, app::Byte__Array* data)
    IL2CPP_REGISTER_METHOD(0x01B70740, void, ctor_3, app::UberStateValueStore* this_ptr, app::Byte__Array* data, int32_t actual_size)
    IL2CPP_REGISTER_METHOD(0x01B70A90, void, FinalizeInitialization, app::UberStateValueStore* this_ptr, bool should_parse)
    IL2CPP_REGISTER_METHOD(0x01B70B80, void, PopulateValueStore, app::UberStateValueStore* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01B71170, app::UberStateSaveFileHandler_LoadStatus__Enum, ParseData, app::UberStateValueStore* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01B715F0, void, ApplyStateToByteArray, app::UberStateValueStore* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01B719E0, bool, get_IsDirty, app::UberStateValueStore* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x002FB930,
        app::IEnumerable_1_KeyValuePair_2_Moon_UberID_Moon_UberStateValueGroup_*,
        get_GroupMap,
        app::UberStateValueStore* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x01B71BC0,
        bool,
        TryGetGroup,
        app::UberStateValueStore* this_ptr,
        app::ISerializedUberState* descriptor,
        app::UberStateValueGroup** uber_state_value_group
    )
    IL2CPP_REGISTER_METHOD(
        0x01B71CC0,
        bool,
        GetState_1,
        app::UberStateValueStore* this_ptr,
        app::ISerializedUberState* uber_state_descriptor,
        app::Object** state
    )
    IL2CPP_REGISTER_METHOD(0x01B71DB0, bool, GetState_2, app::UberStateValueStore* this_ptr, app::ISerializedUberState* uber_state_descriptor, bool* state)
    IL2CPP_REGISTER_METHOD(0x01B71DF0, bool, GetState_3, app::UberStateValueStore* this_ptr, app::ISerializedUberState* uber_state_descriptor, float* state)
    IL2CPP_REGISTER_METHOD(0x01B71EE0, bool, GetState_4, app::UberStateValueStore* this_ptr, app::ISerializedUberState* uber_state_descriptor, int32_t* state)
    IL2CPP_REGISTER_METHOD(0x01B71F20, bool, GetState_5, app::UberStateValueStore* this_ptr, app::ISerializedUberState* uber_state_descriptor, uint8_t* state)
    IL2CPP_REGISTER_METHOD(
        0x01B71F60,
        void,
        SetState_1,
        app::UberStateValueStore* this_ptr,
        app::ISerializedUberState* uber_state_descriptor,
        app::Object* uber_state
    )
    IL2CPP_REGISTER_METHOD(0x01B720A0, void, SetState_2, app::UberStateValueStore* this_ptr, app::ISerializedUberState* uber_state_descriptor, bool uber_state)
    IL2CPP_REGISTER_METHOD(0x01B721E0, void, SetState_3, app::UberStateValueStore* this_ptr, app::ISerializedUberState* uber_state_descriptor, float uber_state)
    IL2CPP_REGISTER_METHOD(
        0x01B72320,
        void,
        SetState_4,
        app::UberStateValueStore* this_ptr,
        app::ISerializedUberState* uber_state_descriptor,
        int32_t uber_state
    )
    IL2CPP_REGISTER_METHOD(
        0x01B72460,
        void,
        SetState_5,
        app::UberStateValueStore* this_ptr,
        app::ISerializedUberState* uber_state_descriptor,
        uint8_t uber_state
    )
    IL2CPP_REGISTER_METHOD(0x01B725A0, app::Byte__Array*, ToByteArray, app::UberStateValueStore* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01B726C0, app::Byte__Array*, ToByteArrayWithClone, app::UberStateValueStore* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01B727F0, int32_t, ToByteArrayWithCopy, app::UberStateValueStore* this_ptr, app::Byte__Array** arr)
    IL2CPP_REGISTER_METHOD(
        0x01B72C10,
        app::UberStateValueGroup*,
        GetGroup,
        app::UberStateValueStore* this_ptr,
        app::ISerializedUberState* uber_state_descriptor
    )
    IL2CPP_REGISTER_METHOD(0x0043D9A0, int64_t, get_HeaderSize, app::UberStateValueStore* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01B72EF0, int64_t, get_DataSize, app::UberStateValueStore* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01B730E0, int64_t, get_FullSize, app::UberStateValueStore* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01B73100, void, DebugLog, app::UberStateValueStore* this_ptr, app::String* txt)
    IL2CPP_REGISTER_METHOD(0x01B73190, void, cctor, )
} // namespace app::classes::Moon::UberStateValueStore
