#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CacheData.h>
#include <Modloader/app/structs/CacheData__Array.h>
#include <Modloader/app/structs/DataProvider.h>
#include <Modloader/app/structs/IServiceSynchronizer.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Task_1_System_Byte_.h>

namespace app::classes::SystemIntegration::Synchronizer::DataProvider {
    IL2CPP_REGISTER_METHOD(0x005332A0, bool, get_HasSynchronised, app::DataProvider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00533330, app::CacheData__Array*, get_Remote, app::DataProvider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005333C0, app::CacheData__Array*, get_Local, app::DataProvider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00533450, void, ctor, app::DataProvider* this_ptr, app::IServiceSynchronizer* service_synchronizer)
    IL2CPP_REGISTER_METHOD(0x005335B0, void, SetUser, app::DataProvider* this_ptr, app::String* user)
    IL2CPP_REGISTER_METHOD(0x00533670, void, Award, app::DataProvider* this_ptr, app::CacheData* data, bool force_update)
    IL2CPP_REGISTER_METHOD(0x00533AC0, void, SynchronizeWithServer, app::DataProvider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005340B0, void, ClearLocalCache, app::DataProvider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005341A0, void, SerializeLocalData, app::DataProvider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00534260, void, BuildFor, app::DataProvider* this_ptr, app::String* user)
    IL2CPP_REGISTER_METHOD(0x00534670, void, _BuildFor_b__17_0, app::DataProvider* this_ptr, app::Task_1_System_Byte_* t)
} // namespace app::classes::SystemIntegration::Synchronizer::DataProvider
