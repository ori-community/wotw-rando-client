#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/InterlockedGate__Boxed.h>

namespace app::classes::System::Net::InterlockedGate {
    IL2CPP_REGISTER_METHOD(0x001267F0, void, Reset, (app::InterlockedGate__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001D7280, bool, Trigger, (app::InterlockedGate__Boxed * this_ptr, bool exclusive))
    IL2CPP_REGISTER_METHODINFO(0x04739DB8, InterlockedGate_Trigger__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x001D7350, bool, StartTriggering, (app::InterlockedGate__Boxed * this_ptr, bool exclusive))
    IL2CPP_REGISTER_METHODINFO(0x0474DC40, InterlockedGate_StartTriggering__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x001D7420, void, FinishTriggering, (app::InterlockedGate__Boxed * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04738C90, InterlockedGate_FinishTriggering__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x001D74D0, bool, StartSignaling, (app::InterlockedGate__Boxed * this_ptr, bool exclusive))
    IL2CPP_REGISTER_METHODINFO(0x04781DE0, InterlockedGate_StartSignaling__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x001D75A0, void, FinishSignaling, (app::InterlockedGate__Boxed * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047211D8, InterlockedGate_FinishSignaling__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x001D7650, bool, Complete, (app::InterlockedGate__Boxed * this_ptr))
} // namespace app::classes::System::Net::InterlockedGate
