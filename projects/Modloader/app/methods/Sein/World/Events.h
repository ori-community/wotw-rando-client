#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/WorldProgression__Enum.h>

namespace app::classes::Sein::World::Events {
    IL2CPP_REGISTER_METHOD(0x0106F850, bool, get_GinsoTreeEntered, ())
    IL2CPP_REGISTER_METHOD(0x0106F940, void, set_GinsoTreeEntered, (bool value))
    IL2CPP_REGISTER_METHOD(0x0106FA30, bool, get_MistLifted, ())
    IL2CPP_REGISTER_METHOD(0x0106FB20, void, set_MistLifted, (bool value))
    IL2CPP_REGISTER_METHOD(0x0106FC10, bool, get_WaterPurified, ())
    IL2CPP_REGISTER_METHOD(0x0106FD00, void, set_WaterPurified, (bool value))
    IL2CPP_REGISTER_METHOD(0x0106FEF0, bool, get_WindRestored, ())
    IL2CPP_REGISTER_METHOD(0x0106FFE0, void, set_WindRestored, (bool value))
    IL2CPP_REGISTER_METHOD(0x010700D0, bool, get_GumoFree, ())
    IL2CPP_REGISTER_METHOD(0x010701C0, void, set_GumoFree, (bool value))
    IL2CPP_REGISTER_METHOD(0x010702B0, bool, get_SpiritTreeReached, ())
    IL2CPP_REGISTER_METHOD(0x010703A0, void, set_SpiritTreeReached, (bool value))
    IL2CPP_REGISTER_METHOD(0x010704A0, bool, get_WarmthReturned, ())
    IL2CPP_REGISTER_METHOD(0x01070590, void, set_WarmthReturned, (bool value))
    IL2CPP_REGISTER_METHOD(0x01070680, bool, get_DarknessLifted, ())
    IL2CPP_REGISTER_METHOD(0x01070770, void, set_DarknessLifted, (bool value))
    IL2CPP_REGISTER_METHOD(0x01070870, bool, get_KwolokDead, ())
    IL2CPP_REGISTER_METHOD(0x01070960, void, set_KwolokDead, (bool value))
    IL2CPP_REGISTER_METHOD(0x01070A60, bool, get_CompleteWatermillInKwoloksThroneRoom, ())
    IL2CPP_REGISTER_METHOD(0x01070B90, void, set_CompleteWatermillInKwoloksThroneRoom, (bool value))
    IL2CPP_REGISTER_METHOD(0x01070DD0, bool, get_WatermillCompleted, ())
    IL2CPP_REGISTER_METHOD(0x01070F00, void, set_WatermillCompleted, (bool value))
    IL2CPP_REGISTER_METHOD(0x01071180, bool, get_ActOneCompleted, ())
    IL2CPP_REGISTER_METHOD(0x010712F0, void, set_ActOneCompleted, (bool value))
    IL2CPP_REGISTER_METHOD(0x010715C0, bool, get_WinterWispCompleted, ())
    IL2CPP_REGISTER_METHOD(0x010716C0, void, set_WinterWispCompleted, (bool value))
    IL2CPP_REGISTER_METHOD(0x01071800, bool, get_GravityActivated, ())
    IL2CPP_REGISTER_METHOD(0x01071810, void, set_GravityActivated, (bool value))
    IL2CPP_REGISTER_METHOD(0x01071A00, bool, get_m_gravityActivated, ())
    IL2CPP_REGISTER_METHOD(0x01071AF0, void, set_m_gravityActivated, (bool value))
    IL2CPP_REGISTER_METHOD(0x01071BE0, app::WorldProgression__Enum, get_Progression, ())
} // namespace app::classes::Sein::World::Events
