#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/MusicZone.h>
#include <Modloader/app/structs/List_1_MusicZone_.h>

namespace app::classes::System::Collections::Generic::List_1_MusicZone_ {
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::MusicZone*, get_Item, (app::List_1_MusicZone_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x04732630, List_1_MusicZone__get_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, (app::List_1_MusicZone_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04754940, List_1_MusicZone__get_Count__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, (app::List_1_MusicZone_ * this_ptr, app::MusicZone* item))
    IL2CPP_REGISTER_METHODINFO(0x0478CB00, List_1_MusicZone__Add__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025F12F0, bool, Remove, (app::List_1_MusicZone_ * this_ptr, app::MusicZone* item))
    IL2CPP_REGISTER_METHODINFO(0x0478ED10, List_1_MusicZone__Remove__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, (app::List_1_MusicZone_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0473FA88, List_1_MusicZone___ctor__MethodInfo)
} // namespace app::classes::System::Collections::Generic::List_1_MusicZone_
