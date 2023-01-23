#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/List_1_LaserShieldPieceProjectile_.h>
#include <Modloader/app/structs/LaserShieldPieceProjectile.h>

namespace app::classes::System::Collections::Generic::List_1_LaserShieldPieceProjectile_ {
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, (app::List_1_LaserShieldPieceProjectile_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04787DF8, List_1_LaserShieldPieceProjectile__get_Count__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x022A4010, void, Clear, (app::List_1_LaserShieldPieceProjectile_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047496D0, List_1_LaserShieldPieceProjectile__Clear__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, (app::List_1_LaserShieldPieceProjectile_ * this_ptr, app::LaserShieldPieceProjectile* item))
    IL2CPP_REGISTER_METHODINFO(0x04758528, List_1_LaserShieldPieceProjectile__Add__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025F12F0, bool, Remove, (app::List_1_LaserShieldPieceProjectile_ * this_ptr, app::LaserShieldPieceProjectile* item))
    IL2CPP_REGISTER_METHODINFO(0x04723330, List_1_LaserShieldPieceProjectile__Remove__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, (app::List_1_LaserShieldPieceProjectile_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04760A78, List_1_LaserShieldPieceProjectile___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::LaserShieldPieceProjectile*, get_Item, (app::List_1_LaserShieldPieceProjectile_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x047084C8, List_1_LaserShieldPieceProjectile__get_Item__MethodInfo)
} // namespace app::classes::System::Collections::Generic::List_1_LaserShieldPieceProjectile_
