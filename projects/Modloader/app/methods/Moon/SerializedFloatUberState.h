#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::Moon::SerializedFloatUberState {
    IL2CPP_REGISTER_METHOD(0x002FB930, app::UberID*, get_StateID, (app::SerializedFloatUberState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00910BD0, int64_t, get_Size, (app::SerializedFloatUberState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9B0, app::IUberStateGroup*, get_UberStateGroup, (app::SerializedFloatUberState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01B66070, app::UberID*, get_GroupID, (app::SerializedFloatUberState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01B66160, float, get_Value, (app::SerializedFloatUberState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01B662C0, void, set_Value, (app::SerializedFloatUberState * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x01B5FE20, app::NamedValue_1_System_Single___Array*, get_Options, (app::SerializedFloatUberState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01B66390, float, get_GenericValue, (app::SerializedFloatUberState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01B663A0, void, set_GenericValue, (app::SerializedFloatUberState * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x002FBB40, app::Nullable_1_Single_, get_VolitileGenericOverrideValue, (app::SerializedFloatUberState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBB50, void, set_VolitileGenericOverrideValue, (app::SerializedFloatUberState * this_ptr, app::Nullable_1_Single_ value))
    IL2CPP_REGISTER_METHOD(0x00BAB250, app::String*, get_Name, (app::SerializedFloatUberState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01B663B0, void, Save, (app::SerializedFloatUberState * this_ptr, app::UberStateArchive* archive, app::Object* state))
    IL2CPP_REGISTER_METHOD(0x01B664B0, app::Object*, Load, (app::SerializedFloatUberState * this_ptr, app::UberStateArchive* archive, int32_t store_version))
    IL2CPP_REGISTER_METHOD(0x01B664C0, app::Object*, Read, (app::UberStateArchive * archive, int32_t store_version))
    IL2CPP_REGISTER_METHOD(0x0043D9E0, app::UberStateHeader_UberStateType__Enum, get_Type, (app::SerializedFloatUberState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01B665A0, app::Object*, CreateDefaultUberState, (app::SerializedFloatUberState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01B66630, app::String*, ToString, (app::SerializedFloatUberState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01B5FF80, void, ctor, (app::SerializedFloatUberState * this_ptr))
} // namespace app::classes::Moon::SerializedFloatUberState
