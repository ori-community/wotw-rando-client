#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::Moon::IntUberState {
    IL2CPP_REGISTER_METHOD(0x002FB930, app::UberID*, get_StateID, (app::IntUberState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9B0, app::IUberStateGroup*, get_UberStateGroup, (app::IntUberState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01B63060, app::UberID*, get_GroupID, (app::IntUberState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01B63150, int32_t, get_Value, (app::IntUberState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01B63290, void, set_Value, (app::IntUberState * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x01B5FE20, app::NamedValue_1_System_Int32___Array*, get_Options, (app::IntUberState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01B63350, float, get_GenericValue, (app::IntUberState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01B63370, void, set_GenericValue, (app::IntUberState * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x002FBB40, app::Nullable_1_Single_, get_VolitileGenericOverrideValue, (app::IntUberState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBB50, void, set_VolitileGenericOverrideValue, (app::IntUberState * this_ptr, app::Nullable_1_Single_ value))
    IL2CPP_REGISTER_METHOD(0x00BAB250, app::String*, get_Name, (app::IntUberState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01B63380, void, Initialize, (app::IntUberState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01B63390, app::String*, ToString, (app::IntUberState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01B5FF80, void, ctor, (app::IntUberState * this_ptr))
} // namespace app::classes::Moon::IntUberState
