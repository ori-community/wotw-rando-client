#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::DesiredUberStateComposite {
    IL2CPP_REGISTER_METHOD(0x01B58540, void, WriteDesiredStates, (app::DesiredUberStateComposite * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01B58660, void, Revert, (app::DesiredUberStateComposite * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01B58780, app::IUberState *, get_UberState, (app::DesiredUberStateComposite * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01B58820, bool, IsEmpty, (app::DesiredUberStateComposite * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01B588E0, bool, IsFulfilled, (app::DesiredUberStateComposite * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01B58A10, app::List_1_Moon_IUberState_ *, GetAllDescriptors, (app::DesiredUberStateComposite * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01B58F90, void, WriteDesiredStateForList, (app::DesiredUberStateComposite * this_ptr, app::IDesiredUberState__Array * requirements))
    IL2CPP_REGISTER_METHOD(0x01B59100, void, RevertStateForList, (app::DesiredUberStateComposite * this_ptr, app::IDesiredUberState__Array * requirements))
    IL2CPP_REGISTER_METHOD(0x01B59270, bool, IsListFullfilled, (app::DesiredUberStateComposite * this_ptr, app::IDesiredUberState__Array * requirements))
    IL2CPP_REGISTER_METHOD(0x01B59350, app::String *, get_NiceName, (app::DesiredUberStateComposite * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01B593D0, void, ctor, (app::DesiredUberStateComposite * this_ptr))
}
