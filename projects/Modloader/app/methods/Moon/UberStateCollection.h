#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::Moon::UberStateCollection {
    IL2CPP_REGISTER_METHOD(0x01B674A0, app::UberStateCollection*, get_Instance, ())
    IL2CPP_REGISTER_METHOD(0x01B67640, void, ResetStatics, ())
    IL2CPP_REGISTER_METHOD(0x01B67700, void, InitializeCollectionSynchronous, (bool force_update))
    IL2CPP_REGISTER_METHOD(0x01B677F0, void, InitializeCollection, (app::Action * on_collection_loaded))
    IL2CPP_REGISTER_METHOD(0x01B67960, app::ReadOnlyCollection_1_UnityEngine_ScriptableObject_*, get_Descriptors, ())
    IL2CPP_REGISTER_METHOD(0x01B67A20, void, Init, (app::UberStateCollection * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01B67BD0, void, PrepareRuntimeDataType, (app::UberStateCollection * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01B68090, bool, IsUberStateAssetPath, (app::String * asset_path))
    IL2CPP_REGISTER_METHOD(0x01B68170, app::IUberState*, GetState, (app::UberID * group_i_d, app::UberID* state_i_d))
    IL2CPP_REGISTER_METHOD(0x01B683B0, void, Add, (app::UberID * id, app::UberStateCollectionGroup* uber_state_collection_group))
    IL2CPP_REGISTER_METHOD(0x01B684B0, app::IUberState__Array*, BuildDescriptorsArray, ())
    IL2CPP_REGISTER_METHOD(0x01B68800, app::ReadOnlyCollection_1_Moon_INonSerializedUberState_*, GetNonSerializedUberStates, ())
    IL2CPP_REGISTER_METHOD(0x01B68950, void, InitializeNonSerializedUberStates, ())
    IL2CPP_REGISTER_METHOD(0x01B68B30, app::ReadOnlyCollection_1_Moon_IExternallyModifiableUberState_*, GetExternallyModifiableUberStates, ())
    IL2CPP_REGISTER_METHOD(0x01B68D70, void, ctor, (app::UberStateCollection * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01B69150, void, cctor, ())
} // namespace app::classes::Moon::UberStateCollection
