#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/UberID.h>
#include <Modloader/app/structs/IUberStateGroup.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/PlayerUberState.h>
#include <Modloader/app/structs/PlayerUberStateDescriptor.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/UberStateArchive.h>
#include <Modloader/app/structs/UberStateHeader_UberStateType__Enum.h>

namespace app::classes::Moon::uberSerializationWisp::PlayerUberStateDescriptor {
    IL2CPP_REGISTER_METHOD(0x002FB930, app::UberID*, get_StateID, (app::PlayerUberStateDescriptor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F38130, int64_t, get_Size, (app::PlayerUberStateDescriptor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9D0, app::IUberStateGroup*, get_UberStateGroup, (app::PlayerUberStateDescriptor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F38260, app::UberID*, get_GroupID, (app::PlayerUberStateDescriptor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F38350, app::PlayerUberState*, get_Value, (app::PlayerUberStateDescriptor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F38440, void, set_Value, (app::PlayerUberStateDescriptor * this_ptr, app::PlayerUberState* value))
    IL2CPP_REGISTER_METHOD(0x00BAB250, app::String*, get_Name, (app::PlayerUberStateDescriptor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F38510, void, SetIsDirty, (app::PlayerUberStateDescriptor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F385C0, void, Save, (app::PlayerUberStateDescriptor * this_ptr, app::UberStateArchive* archive, app::Object* state))
    IL2CPP_REGISTER_METHOD(0x00F385E0, app::Object*, Load, (app::PlayerUberStateDescriptor * this_ptr, app::UberStateArchive* archive, int32_t store_version))
    IL2CPP_REGISTER_METHOD(0x008E77B0, app::UberStateHeader_UberStateType__Enum, get_Type, (app::PlayerUberStateDescriptor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F38940, app::Object*, CreateDefaultUberState, (app::PlayerUberStateDescriptor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00585310, bool, get_IsActive, (app::PlayerUberStateDescriptor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F38B60, void, set_IsActive, (app::PlayerUberStateDescriptor * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x00F38B90, void, OnGui, (app::PlayerUberStateDescriptor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F39070, void, HandleInput, (app::PlayerUberStateDescriptor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F390E0, void, ctor, (app::PlayerUberStateDescriptor * this_ptr))
} // namespace app::classes::Moon::uberSerializationWisp::PlayerUberStateDescriptor
