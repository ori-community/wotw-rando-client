#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/List_1_SpiritTurret_.h>
#include <Modloader/app/structs/SpiritTurret.h>

namespace app::classes::System::Collections::Generic::List_1_SpiritTurret_ {
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, (app::List_1_SpiritTurret_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0470B058, List_1_SpiritTurret__get_Count__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, (app::List_1_SpiritTurret_ * this_ptr, app::SpiritTurret* item))
    IL2CPP_REGISTER_METHODINFO(0x04779148, List_1_SpiritTurret__Add__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025F12F0, bool, Remove, (app::List_1_SpiritTurret_ * this_ptr, app::SpiritTurret* item))
    IL2CPP_REGISTER_METHODINFO(0x04749708, List_1_SpiritTurret__Remove__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::SpiritTurret*, get_Item, (app::List_1_SpiritTurret_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x04793798, List_1_SpiritTurret__get_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, (app::List_1_SpiritTurret_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04722660, List_1_SpiritTurret___ctor__MethodInfo)
} // namespace app::classes::System::Collections::Generic::List_1_SpiritTurret_
