#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/RuntimeGameWorldArea_c.h>
#include <Modloader/app/structs/GameWorldArea_PlayerAbilityInfo.h>
#include <Modloader/app/structs/KeyValuePair_2_System_Int32_WorldMapAreaState_.h>
#include <Modloader/app/structs/RuntimeWorldMapIcon.h>
#include <Modloader/app/structs/SerializedBooleanUberState.h>
#include <Modloader/app/structs/SerializedIntUberState.h>

namespace app::classes::RuntimeGameWorldArea___c {
    IL2CPP_REGISTER_METHOD(0x0137A610, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::RuntimeGameWorldArea_c * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0137A750, bool, _get_AreaDiscovered_b__21_0, (app::RuntimeGameWorldArea_c * this_ptr, app::KeyValuePair_2_System_Int32_WorldMapAreaState_ s))
    IL2CPP_REGISTER_METHOD(0x0137A7D0, bool, _UpdateCompletionAmount_b__32_0, (app::RuntimeGameWorldArea_c * this_ptr, app::SerializedBooleanUberState* i))
    IL2CPP_REGISTER_METHOD(0x0137A7D0, bool, _UpdateCompletionAmount_b__32_1, (app::RuntimeGameWorldArea_c * this_ptr, app::SerializedBooleanUberState* i))
    IL2CPP_REGISTER_METHOD(0x0137A7F0, bool, _UpdateCompletionAmount_b__32_2, (app::RuntimeGameWorldArea_c * this_ptr, app::SerializedIntUberState* r))
    IL2CPP_REGISTER_METHOD(0x0137A820, bool, _UpdateCompletionAmount_b__32_3, (app::RuntimeGameWorldArea_c * this_ptr, app::GameWorldArea_PlayerAbilityInfo* a))
    IL2CPP_REGISTER_METHOD(0x0137A7D0, bool, _LogCollectableStates_b__35_0, (app::RuntimeGameWorldArea_c * this_ptr, app::SerializedBooleanUberState* i))
    IL2CPP_REGISTER_METHOD(0x0137A7D0, bool, _LogCollectableStates_b__35_1, (app::RuntimeGameWorldArea_c * this_ptr, app::SerializedBooleanUberState* i))
    IL2CPP_REGISTER_METHOD(0x0137A930, bool, _LogCollectableStates_b__35_2, (app::RuntimeGameWorldArea_c * this_ptr, app::SerializedBooleanUberState* i))
    IL2CPP_REGISTER_METHOD(0x0137A960, int32_t, _LogCollectableStates_b__35_3, (app::RuntimeGameWorldArea_c * this_ptr, app::SerializedBooleanUberState* a, app::SerializedBooleanUberState* b))
    IL2CPP_REGISTER_METHOD(0x0137A960, int32_t, _LogCollectableStates_b__35_4, (app::RuntimeGameWorldArea_c * this_ptr, app::SerializedBooleanUberState* a, app::SerializedBooleanUberState* b))
    IL2CPP_REGISTER_METHOD(0x0137A9C0, bool, _LogCollectableStates_b__35_5, (app::RuntimeGameWorldArea_c * this_ptr, app::RuntimeWorldMapIcon* i))
    IL2CPP_REGISTER_METHOD(0x0137AA10, bool, _LogCollectableStates_b__35_6, (app::RuntimeGameWorldArea_c * this_ptr, app::RuntimeWorldMapIcon* i))
    IL2CPP_REGISTER_METHOD(0x0137AA60, int32_t, _LogCollectableStates_b__35_7, (app::RuntimeGameWorldArea_c * this_ptr, app::RuntimeWorldMapIcon* a, app::RuntimeWorldMapIcon* b))
    IL2CPP_REGISTER_METHOD(0x0137AA60, int32_t, _LogCollectableStates_b__35_8, (app::RuntimeGameWorldArea_c * this_ptr, app::RuntimeWorldMapIcon* a, app::RuntimeWorldMapIcon* b))
} // namespace app::classes::RuntimeGameWorldArea___c
