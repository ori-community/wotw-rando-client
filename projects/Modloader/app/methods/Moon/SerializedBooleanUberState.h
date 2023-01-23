#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/UberID.h>
#include <Modloader/app/structs/SerializedBooleanUberState.h>
#include <Modloader/app/structs/IUberStateGroup.h>
#include <Modloader/app/structs/Nullable_1_Single_.h>
#include <Modloader/app/structs/NamedValue_1_System_Boolean___Array.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/UberStateArchive.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/UberStateHeader_UberStateType__Enum.h>

namespace app::classes::Moon::SerializedBooleanUberState {
    IL2CPP_REGISTER_METHOD(0x002FB930, app::UberID*, get_StateID, (app::SerializedBooleanUberState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417920, int64_t, get_Size, (app::SerializedBooleanUberState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9B0, app::IUberStateGroup*, get_UberStateGroup, (app::SerializedBooleanUberState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01B652C0, app::UberID*, get_GroupID, (app::SerializedBooleanUberState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01B653B0, bool, get_Value, (app::SerializedBooleanUberState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01B65500, void, set_Value, (app::SerializedBooleanUberState * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x004F4CE0, bool, get_DefaultBooleanValue, (app::SerializedBooleanUberState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004F4CF0, void, set_DefaultBooleanValue, (app::SerializedBooleanUberState * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x01B655D0, float, get_GenericValue, (app::SerializedBooleanUberState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01B655F0, void, set_GenericValue, (app::SerializedBooleanUberState * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x01A66990, app::Nullable_1_Single_, get_VolitileGenericOverrideValue, (app::SerializedBooleanUberState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01B5FF70, void, set_VolitileGenericOverrideValue, (app::SerializedBooleanUberState * this_ptr, app::Nullable_1_Single_ value))
    IL2CPP_REGISTER_METHOD(0x01B5FE20, app::NamedValue_1_System_Boolean___Array*, get_Options, (app::SerializedBooleanUberState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00BAB250, app::String*, get_Name, (app::SerializedBooleanUberState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01B656B0, void, Save, (app::SerializedBooleanUberState * this_ptr, app::UberStateArchive* archive, app::Object* state))
    IL2CPP_REGISTER_METHOD(0x01B65770, app::Object*, Load, (app::SerializedBooleanUberState * this_ptr, app::UberStateArchive* archive, int32_t store_version))
    IL2CPP_REGISTER_METHOD(0x01B65780, app::Object*, Read, (app::UberStateArchive * archive, int32_t store_version))
    IL2CPP_REGISTER_METHOD(0x00420230, app::UberStateHeader_UberStateType__Enum, get_Type, (app::SerializedBooleanUberState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01B65820, app::Object*, CreateDefaultUberState, (app::SerializedBooleanUberState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01B658B0, app::String*, ToString, (app::SerializedBooleanUberState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01B5FF80, void, ctor, (app::SerializedBooleanUberState * this_ptr))
} // namespace app::classes::Moon::SerializedBooleanUberState
