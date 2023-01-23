#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/ResolveEventHandler.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Assembly.h>
#include <Modloader/app/structs/ResolveEventArgs.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/AsyncCallback.h>

namespace app::classes::System::ResolveEventHandler {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::ResolveEventHandler * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x01434D20, app::Assembly*, Invoke, (app::ResolveEventHandler * this_ptr, app::Object* sender, app::ResolveEventArgs* args))
    IL2CPP_REGISTER_METHOD(0x01435260, app::IAsyncResult*, BeginInvoke, (app::ResolveEventHandler * this_ptr, app::Object* sender, app::ResolveEventArgs* args, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00611B40, app::Assembly*, EndInvoke, (app::ResolveEventHandler * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::System::ResolveEventHandler
