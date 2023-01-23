#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/SplineEventHandler.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Vector3.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/AsyncCallback.h>

namespace app::classes::SplineEventHandler {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::SplineEventHandler * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x009A25B0, void, Invoke, (app::SplineEventHandler * this_ptr, app::String* action, app::Vector3 pos, app::Vector3 param))
    IL2CPP_REGISTER_METHOD(0x009A2FD0, app::IAsyncResult*, BeginInvoke, (app::SplineEventHandler * this_ptr, app::String* action, app::Vector3 pos, app::Vector3 param, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::SplineEventHandler * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::SplineEventHandler
