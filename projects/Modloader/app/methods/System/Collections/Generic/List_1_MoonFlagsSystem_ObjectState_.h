#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/List_1_MoonFlagsSystem_ObjectState_.h>
#include <Modloader/app/structs/MoonFlagsSystem_ObjectState.h>

namespace app::classes::System::Collections::Generic::List_1_MoonFlagsSystem_ObjectState_ {
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, (app::List_1_MoonFlagsSystem_ObjectState_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04724048, List_1_MoonFlagsSystem_ObjectState__get_Count__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::MoonFlagsSystem_ObjectState*, get_Item, (app::List_1_MoonFlagsSystem_ObjectState_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x04733C08, List_1_MoonFlagsSystem_ObjectState__get_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025F1690, void, RemoveAt, (app::List_1_MoonFlagsSystem_ObjectState_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x0478B570, List_1_MoonFlagsSystem_ObjectState__RemoveAt__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, (app::List_1_MoonFlagsSystem_ObjectState_ * this_ptr, app::MoonFlagsSystem_ObjectState* item))
    IL2CPP_REGISTER_METHODINFO(0x0472C470, List_1_MoonFlagsSystem_ObjectState__Add__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, (app::List_1_MoonFlagsSystem_ObjectState_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0475DD50, List_1_MoonFlagsSystem_ObjectState___ctor__MethodInfo)
} // namespace app::classes::System::Collections::Generic::List_1_MoonFlagsSystem_ObjectState_
