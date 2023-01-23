#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/List_1_ReplayModel_.h>
#include <Modloader/app/structs/ReplayModel.h>
#include <Modloader/app/structs/List_1_T_Enumerator_ReplayModel_.h>

namespace app::classes::System::Collections::Generic::List_1_ReplayModel_ {
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, (app::List_1_ReplayModel_ * this_ptr, app::ReplayModel* item))
    IL2CPP_REGISTER_METHODINFO(0x0470D878, List_1_ReplayModel__Add__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, (app::List_1_ReplayModel_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04799148, List_1_ReplayModel___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025F0B10, app::List_1_T_Enumerator_ReplayModel_, GetEnumerator, (app::List_1_ReplayModel_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0472A428, List_1_ReplayModel__GetEnumerator__MethodInfo)
} // namespace app::classes::System::Collections::Generic::List_1_ReplayModel_
