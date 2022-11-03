#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::Moon::FloatUberState {
    IL2CPP_REGISTER_METHOD(0x002FB930, app::UberID*, get_StateID, (app::FloatUberState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9B0, app::IUberStateGroup*, get_UberStateGroup, (app::FloatUberState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01B62180, app::UberID*, get_GroupID, (app::FloatUberState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01B62270, float, get_Value, (app::FloatUberState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01B623B0, void, set_Value, (app::FloatUberState * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x01B5FE20, app::NamedValue_1_System_Single___Array*, get_Options, (app::FloatUberState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01B62470, float, get_GenericValue, (app::FloatUberState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01B62480, void, set_GenericValue, (app::FloatUberState * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x002FBB40, app::Nullable_1_Single_, get_VolitileGenericOverrideValue, (app::FloatUberState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBB50, void, set_VolitileGenericOverrideValue, (app::FloatUberState * this_ptr, app::Nullable_1_Single_ value))
    IL2CPP_REGISTER_METHOD(0x00BAB250, app::String*, get_Name, (app::FloatUberState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01B62490, void, Initialize, (app::FloatUberState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01B624A0, app::String*, ToString, (app::FloatUberState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01B5FF80, void, ctor, (app::FloatUberState * this_ptr))
} // namespace app::classes::Moon::FloatUberState
