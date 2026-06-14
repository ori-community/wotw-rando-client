#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/HashSet_1_T_Enumerator_UberWaterReflectionView_Group_.h>
#include <Modloader/app/structs/HashSet_1_UberWaterReflectionView_Group_.h>
#include <Modloader/app/structs/UberWaterReflectionView_Group.h>

namespace app::classes::System::Collections::Generic::HashSet_1_UberWaterReflectionView_Group_ {
    IL2CPP_REGISTER_METHOD(0x02AB4A60, bool, Add, app::HashSet_1_UberWaterReflectionView_Group_* this_ptr, app::UberWaterReflectionView_Group* item)
    IL2CPP_REGISTER_METHOD(0x002FD1D0, int32_t, get_Count, app::HashSet_1_UberWaterReflectionView_Group_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02AB4A90, void, Clear, app::HashSet_1_UberWaterReflectionView_Group_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x02ABCD80,
        app::HashSet_1_T_Enumerator_UberWaterReflectionView_Group_,
        GetEnumerator,
        app::HashSet_1_UberWaterReflectionView_Group_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(0x02AB4370, void, ctor, app::HashSet_1_UberWaterReflectionView_Group_* this_ptr)
} // namespace app::classes::System::Collections::Generic::HashSet_1_UberWaterReflectionView_Group_
