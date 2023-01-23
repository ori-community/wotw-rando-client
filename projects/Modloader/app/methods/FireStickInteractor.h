#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/FireStickInteractor.h>
#include <Modloader/app/structs/Collider.h>
#include <Modloader/app/structs/FireStick.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/StressTestStatus__Enum.h>

namespace app::classes::FireStickInteractor {
    IL2CPP_REGISTER_METHOD(0x0125C150, void, OnEnable, (app::FireStickInteractor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0125C1E0, void, OnDisable, (app::FireStickInteractor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0125C270, void, OnTriggerEnter, (app::FireStickInteractor * this_ptr, app::Collider* collider))
    IL2CPP_REGISTER_METHOD(0x0125C500, void, OnTriggerExit, (app::FireStickInteractor * this_ptr, app::Collider* collider))
    IL2CPP_REGISTER_METHOD(0x0125C6D0, void, OnUsed, (app::FireStickInteractor * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0478A618, FireStickInteractor_OnUsed__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0125C7A0, app::FireStick*, GetFireStick, (app::FireStickInteractor * this_ptr, app::Collider* collider))
    IL2CPP_REGISTER_METHOD(0x0125C980, void, ShowMessage, (app::FireStickInteractor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0125CB70, app::String*, get_StressTestName, (app::FireStickInteractor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0125CBF0, void, StartStressTest, (app::FireStickInteractor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, StressTestUpdate, (app::FireStickInteractor * this_ptr, float delta_time))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, EndStressTest, (app::FireStickInteractor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FD490, app::StressTestStatus__Enum, get_StressTestStatus, (app::FireStickInteractor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FD4A0, void, set_StressTestStatus, (app::FireStickInteractor * this_ptr, app::StressTestStatus__Enum value))
    IL2CPP_REGISTER_METHOD(0x0125CCD0, bool, get_CanExecuteStressTest, (app::FireStickInteractor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_StopMovingPlayerWhilePerforming, (app::FireStickInteractor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::FireStickInteractor * this_ptr))
} // namespace app::classes::FireStickInteractor
