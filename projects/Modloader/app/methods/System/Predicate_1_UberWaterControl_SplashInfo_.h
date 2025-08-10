#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Predicate_1_UberWaterControl_SplashInfo_.h>
#include <Modloader/app/structs/UberWaterControl_SplashInfo.h>

namespace app::classes::System::Predicate_1_UberWaterControl_SplashInfo_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, app::Predicate_1_UberWaterControl_SplashInfo_* this_ptr, app::Object* object, void* method_1)
    IL2CPP_REGISTER_METHOD(0x0288F670, bool, Invoke, app::Predicate_1_UberWaterControl_SplashInfo_* this_ptr, app::UberWaterControl_SplashInfo obj)
    IL2CPP_REGISTER_METHOD(
        0x02A53930,
        app::IAsyncResult*,
        BeginInvoke,
        app::Predicate_1_UberWaterControl_SplashInfo_* this_ptr,
        app::UberWaterControl_SplashInfo obj,
        app::AsyncCallback* callback,
        app::Object* object
    )
    IL2CPP_REGISTER_METHOD(0x008A1BF0, bool, EndInvoke, app::Predicate_1_UberWaterControl_SplashInfo_* this_ptr, app::IAsyncResult* result)
} // namespace app::classes::System::Predicate_1_UberWaterControl_SplashInfo_
