#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Func_2_XGamingRuntime_Interop_XblAchievementMediaAsset_Object_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/XblAchievementMediaAsset_1.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/AsyncCallback.h>

namespace app::classes::System::Func_2_XGamingRuntime_Interop_XblAchievementMediaAsset_Object_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Func_2_XGamingRuntime_Interop_XblAchievementMediaAsset_Object_ * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x02FA4050, app::Object*, Invoke, (app::Func_2_XGamingRuntime_Interop_XblAchievementMediaAsset_Object_ * this_ptr, app::XblAchievementMediaAsset_1 arg))
    IL2CPP_REGISTER_METHOD(0x02FA52A0, app::IAsyncResult*, BeginInvoke, (app::Func_2_XGamingRuntime_Interop_XblAchievementMediaAsset_Object_ * this_ptr, app::XblAchievementMediaAsset_1 arg, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00611B40, app::Object*, EndInvoke, (app::Func_2_XGamingRuntime_Interop_XblAchievementMediaAsset_Object_ * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::System::Func_2_XGamingRuntime_Interop_XblAchievementMediaAsset_Object_
