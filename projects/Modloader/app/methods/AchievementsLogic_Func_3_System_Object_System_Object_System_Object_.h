#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AchievementsLogic_Func_3_System_Object_System_Object_System_Object_.h>
#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::AchievementsLogic_Func_3_System_Object_System_Object_System_Object_ {
    IL2CPP_REGISTER_METHOD(
        0x00611810,
        void,
        ctor,
        app::AchievementsLogic_Func_3_System_Object_System_Object_System_Object_* this_ptr,
        app::Object* object,
        void* method_1
    )
    IL2CPP_REGISTER_METHOD(
        0x019D6DD0,
        bool,
        Invoke,
        app::AchievementsLogic_Func_3_System_Object_System_Object_System_Object_* this_ptr,
        app::Object** obj1,
        app::Object** obj2
    )
    IL2CPP_REGISTER_METHOD(
        0x019D7240,
        app::IAsyncResult*,
        BeginInvoke,
        app::AchievementsLogic_Func_3_System_Object_System_Object_System_Object_* this_ptr,
        app::Object** obj1,
        app::Object** obj2,
        app::AsyncCallback* callback,
        app::Object* object
    )
    IL2CPP_REGISTER_METHOD(
        0x0167DD00,
        bool,
        EndInvoke,
        app::AchievementsLogic_Func_3_System_Object_System_Object_System_Object_* this_ptr,
        app::Object** obj1,
        app::Object** obj2,
        app::IAsyncResult* result
    )
} // namespace app::classes::AchievementsLogic_Func_3_System_Object_System_Object_System_Object_
