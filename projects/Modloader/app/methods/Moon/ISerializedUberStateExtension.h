#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/ISerializedUberState.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::Moon::ISerializedUberStateExtension {
    IL2CPP_REGISTER_METHOD(0x01B62880, void, GetCurrentState_1, (app::ISerializedUberState * uber_state_descriptor, app::Object** state))
    IL2CPP_REGISTER_METHOD(0x01B62940, void, GetCurrentState_2, (app::ISerializedUberState * uber_state_descriptor, bool* state))
    IL2CPP_REGISTER_METHOD(0x01B62A20, void, GetCurrentState_3, (app::ISerializedUberState * uber_state_descriptor, float* state))
    IL2CPP_REGISTER_METHOD(0x01B62AE0, void, GetCurrentState_4, (app::ISerializedUberState * uber_state_descriptor, int32_t* state))
    IL2CPP_REGISTER_METHOD(0x01B62BC0, void, GetCurrentState_5, (app::ISerializedUberState * uber_state_descriptor, uint8_t* state))
    IL2CPP_REGISTER_METHOD(0x01B62CA0, void, SetCurrentState_1, (app::ISerializedUberState * uber_state_descriptor, app::Object* state))
    IL2CPP_REGISTER_METHOD(0x01B62D60, void, SetCurrentState_2, (app::ISerializedUberState * uber_state_descriptor, bool state))
    IL2CPP_REGISTER_METHOD(0x01B62E20, void, SetCurrentState_3, (app::ISerializedUberState * uber_state_descriptor, float state))
    IL2CPP_REGISTER_METHOD(0x01B62EE0, void, SetCurrentState_4, (app::ISerializedUberState * uber_state_descriptor, int32_t state))
    IL2CPP_REGISTER_METHOD(0x01B62FA0, void, SetCurrentState_5, (app::ISerializedUberState * uber_state_descriptor, uint8_t state))
} // namespace app::classes::Moon::ISerializedUberStateExtension
