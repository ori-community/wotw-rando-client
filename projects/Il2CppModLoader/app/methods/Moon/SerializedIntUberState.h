#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Moon::SerializedIntUberState {
    IL2CPP_REGISTER_METHOD(0x002FB930, app::UberID*, get_StateID, (app::SerializedIntUberState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00910BD0, int64_t, get_Size, (app::SerializedIntUberState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IUberStateGroup*, get_UberStateGroup, (app::SerializedIntUberState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01B66710, app::UberID*, get_GroupID, (app::SerializedIntUberState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01B66800, int32_t, get_Value, (app::SerializedIntUberState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01B66950, void, set_Value, (app::SerializedIntUberState * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x01B66A20, float, get_GenericValue, (app::SerializedIntUberState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01B66A40, void, set_GenericValue, (app::SerializedIntUberState * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x002FBB40, app::Nullable_1_Single_, get_VolitileGenericOverrideValue, (app::SerializedIntUberState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBB50, void, set_VolitileGenericOverrideValue, (app::SerializedIntUberState * this_ptr, app::Nullable_1_Single_ value))
    IL2CPP_REGISTER_METHOD(0x00E257C0, app::NamedValue_1_System_Int32___Array*, get_Options, (app::SerializedIntUberState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00BAB250, app::String*, get_Name, (app::SerializedIntUberState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01B66A50, void, Save, (app::SerializedIntUberState * this_ptr, app::UberStateArchive* archive, app::Object* state))
    IL2CPP_REGISTER_METHOD(0x01B66B40, app::Object*, Load, (app::SerializedIntUberState * this_ptr, app::UberStateArchive* archive, int32_t store_version))
    IL2CPP_REGISTER_METHOD(0x01B66B50, app::Object*, Read, (app::UberStateArchive * archive, int32_t store_version))
    IL2CPP_REGISTER_METHOD(0x00417920, app::UberStateHeader_UberStateType__Enum, get_Type, (app::SerializedIntUberState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01B66C20, app::Object*, CreateDefaultUberState, (app::SerializedIntUberState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01B66CB0, app::String*, ToString, (app::SerializedIntUberState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01B5FF80, void, ctor, (app::SerializedIntUberState * this_ptr))
} // namespace app::classes::Moon::SerializedIntUberState
