#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Moon::Timeline::DesiredStateTransition {
    IL2CPP_REGISTER_METHOD(0x00107C30, app::IGenericUberState *, get_GenericUberState, (app::DesiredStateTransition__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0010D3C0, void, set_GenericUberState, (app::DesiredStateTransition__Boxed * this_ptr, app::IGenericUberState * value))
    IL2CPP_REGISTER_METHOD(0x001C0A80, void, Perform, (app::DesiredStateTransition__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001C0B70, void, WriteDesiredStates, (app::DesiredStateTransition__Boxed * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0476AA48, DesiredStateTransition_WriteDesiredStates__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x001C0B80, void, Revert, (app::DesiredStateTransition__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00107C30, app::IUberState *, get_UberState, (app::DesiredStateTransition__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001C0CC0, app::String *, get_NiceName, (app::DesiredStateTransition__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001C0CD0, bool, IsFulfilled, (app::DesiredStateTransition__Boxed * this_ptr))
}
