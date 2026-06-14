#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CountUberState.h>
#include <Modloader/app/structs/IUberStateGroup.h>
#include <Modloader/app/structs/List_1_Moon_IUberState_.h>
#include <Modloader/app/structs/NamedValue_1_System_Int32___Array.h>
#include <Modloader/app/structs/Nullable_1_Single_.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/UberID.h>
#include <Modloader/app/structs/UberStateCondition.h>

namespace app::classes::Moon::CountUberState {
    IL2CPP_REGISTER_METHOD(0x002FB930, app::UberID*, get_StateID, app::CountUberState* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IUberStateGroup*, get_UberStateGroup, app::CountUberState* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01B60FC0, app::UberID*, get_GroupID, app::CountUberState* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01B610B0, int32_t, get_Value, app::CountUberState* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01B612B0, void, set_Value, app::CountUberState* this_ptr, int32_t value)
    IL2CPP_REGISTER_METHOD(0x01B61350, app::NamedValue_1_System_Int32___Array*, get_Options, app::CountUberState* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01B61370, int32_t, EvaluateConditions, app::CountUberState* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01B61460, app::UberStateCondition*, GetUberStateCondition, app::CountUberState* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(0x00BAB250, app::String*, get_Name, app::CountUberState* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01B61680, app::String*, ToString, app::CountUberState* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01B61760, float, get_GenericValue, app::CountUberState* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, set_GenericValue, app::CountUberState* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x002FBB60, app::Nullable_1_Single_, get_VolitileGenericOverrideValue, app::CountUberState* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBB70, void, set_VolitileGenericOverrideValue, app::CountUberState* this_ptr, app::Nullable_1_Single_ value)
    IL2CPP_REGISTER_METHOD(0x01B61780, app::List_1_Moon_IUberState_*, get_UberStates, app::CountUberState* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01B5FF80, void, ctor, app::CountUberState* this_ptr)
} // namespace app::classes::Moon::CountUberState
