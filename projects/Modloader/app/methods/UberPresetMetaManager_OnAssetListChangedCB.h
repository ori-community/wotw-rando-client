#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/UberPresetMetaManager_OnAssetListChangedCB.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/AsyncCallback.h>

namespace app::classes::UberPresetMetaManager_OnAssetListChangedCB {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::UberPresetMetaManager_OnAssetListChangedCB * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x00611820, void, Invoke, (app::UberPresetMetaManager_OnAssetListChangedCB * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00611B10, app::IAsyncResult*, BeginInvoke, (app::UberPresetMetaManager_OnAssetListChangedCB * this_ptr, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::UberPresetMetaManager_OnAssetListChangedCB * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::UberPresetMetaManager_OnAssetListChangedCB
