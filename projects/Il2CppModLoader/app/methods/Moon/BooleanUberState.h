#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Moon::BooleanUberState {
    IL2CPP_REGISTER_METHOD(0x002FB930, app::UberID*, get_StateID, (app::BooleanUberState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9B0, app::IUberStateGroup*, get_UberStateGroup, (app::BooleanUberState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01B5FB20, app::UberID*, get_GroupID, (app::BooleanUberState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01B5FC10, bool, get_Value, (app::BooleanUberState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01B5FD60, void, set_Value, (app::BooleanUberState * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x004F4CE0, bool, get_DefaultBooleanValue, (app::BooleanUberState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004F4CF0, void, set_DefaultBooleanValue, (app::BooleanUberState * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x01B5FE20, app::NamedValue_1_System_Boolean___Array*, get_Options, (app::BooleanUberState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00BAB250, app::String*, get_Name, (app::BooleanUberState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01B5FE40, void, Initialize, (app::BooleanUberState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01B5FE50, app::String*, ToString, (app::BooleanUberState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01B5FF30, float, get_GenericValue, (app::BooleanUberState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01B5FF50, void, set_GenericValue, (app::BooleanUberState * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x01A66990, app::Nullable_1_Single_, get_VolitileGenericOverrideValue, (app::BooleanUberState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01B5FF70, void, set_VolitileGenericOverrideValue, (app::BooleanUberState * this_ptr, app::Nullable_1_Single_ value))
    IL2CPP_REGISTER_METHOD(0x01B5FF80, void, ctor, (app::BooleanUberState * this_ptr))
} // namespace app::classes::Moon::BooleanUberState
