#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/Func_2_XGamingRuntime_Interop_XblAchievementReward_Object_.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/XblAchievementReward_1.h>

namespace app::classes::System::Func_2_XGamingRuntime_Interop_XblAchievementReward_Object_ {
    IL2CPP_REGISTER_METHOD(
        0x00611810,
        void,
        ctor,
        app::Func_2_XGamingRuntime_Interop_XblAchievementReward_Object_* this_ptr,
        app::Object* object,
        void* method_1
    )
    IL2CPP_REGISTER_METHOD(
        0x02FA5440,
        app::Object*,
        Invoke,
        app::Func_2_XGamingRuntime_Interop_XblAchievementReward_Object_* this_ptr,
        app::XblAchievementReward_1 arg
    )
    IL2CPP_REGISTER_METHOD(
        0x02FA59A0,
        app::IAsyncResult*,
        BeginInvoke,
        app::Func_2_XGamingRuntime_Interop_XblAchievementReward_Object_* this_ptr,
        app::XblAchievementReward_1 arg,
        app::AsyncCallback* callback,
        app::Object* object
    )
    IL2CPP_REGISTER_METHOD(
        0x00611B40,
        app::Object*,
        EndInvoke,
        app::Func_2_XGamingRuntime_Interop_XblAchievementReward_Object_* this_ptr,
        app::IAsyncResult* result
    )
} // namespace app::classes::System::Func_2_XGamingRuntime_Interop_XblAchievementReward_Object_
