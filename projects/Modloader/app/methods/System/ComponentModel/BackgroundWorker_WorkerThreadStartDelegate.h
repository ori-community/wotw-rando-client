#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/BackgroundWorker_WorkerThreadStartDelegate.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/AsyncCallback.h>

namespace app::classes::System::ComponentModel::BackgroundWorker_WorkerThreadStartDelegate {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::BackgroundWorker_WorkerThreadStartDelegate * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x00673B90, void, Invoke, (app::BackgroundWorker_WorkerThreadStartDelegate * this_ptr, app::Object* argument))
    IL2CPP_REGISTER_METHOD(0x00674080, app::IAsyncResult*, BeginInvoke, (app::BackgroundWorker_WorkerThreadStartDelegate * this_ptr, app::Object* argument, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::BackgroundWorker_WorkerThreadStartDelegate * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::System::ComponentModel::BackgroundWorker_WorkerThreadStartDelegate
