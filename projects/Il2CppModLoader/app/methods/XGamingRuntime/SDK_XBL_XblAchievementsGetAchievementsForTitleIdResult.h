#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::XGamingRuntime::SDK_XBL_XblAchievementsGetAchievementsForTitleIdResult {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::SDK_XBL_XblAchievementsGetAchievementsForTitleIdResult * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x015C22A0, void, Invoke, (app::SDK_XBL_XblAchievementsGetAchievementsForTitleIdResult * this_ptr, int32_t hresult, app::XblAchievementsResultHandle* result))
    IL2CPP_REGISTER_METHOD(0x030BA9E0, app::IAsyncResult*, BeginInvoke, (app::SDK_XBL_XblAchievementsGetAchievementsForTitleIdResult * this_ptr, int32_t hresult, app::XblAchievementsResultHandle* result, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::SDK_XBL_XblAchievementsGetAchievementsForTitleIdResult * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::XGamingRuntime::SDK_XBL_XblAchievementsGetAchievementsForTitleIdResult
