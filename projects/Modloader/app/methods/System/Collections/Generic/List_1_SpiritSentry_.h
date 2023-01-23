#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/List_1_SpiritSentry_.h>
#include <Modloader/app/structs/SpiritSentry.h>

namespace app::classes::System::Collections::Generic::List_1_SpiritSentry_ {
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, (app::List_1_SpiritSentry_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04755DF8, List_1_SpiritSentry__get_Count__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, (app::List_1_SpiritSentry_ * this_ptr, app::SpiritSentry* item))
    IL2CPP_REGISTER_METHODINFO(0x04755038, List_1_SpiritSentry__Add__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025F12F0, bool, Remove, (app::List_1_SpiritSentry_ * this_ptr, app::SpiritSentry* item))
    IL2CPP_REGISTER_METHODINFO(0x04780F28, List_1_SpiritSentry__Remove__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::SpiritSentry*, get_Item, (app::List_1_SpiritSentry_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x04747298, List_1_SpiritSentry__get_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, (app::List_1_SpiritSentry_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04751FE0, List_1_SpiritSentry___ctor__MethodInfo)
} // namespace app::classes::System::Collections::Generic::List_1_SpiritSentry_
