#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/BlockState__Enum.h>
#include <Modloader/app/structs/DeflateManager_CompressFunc.h>
#include <Modloader/app/structs/FlushType__Enum.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::Ionic::Zlib::DeflateManager_CompressFunc {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, app::DeflateManager_CompressFunc* this_ptr, app::Object* object, void* method_1)
    IL2CPP_REGISTER_METHOD(0x02B33400, app::BlockState__Enum, Invoke, app::DeflateManager_CompressFunc* this_ptr, app::FlushType__Enum flush)
    IL2CPP_REGISTER_METHOD(
        0x0306C060,
        app::IAsyncResult*,
        BeginInvoke,
        app::DeflateManager_CompressFunc* this_ptr,
        app::FlushType__Enum flush,
        app::AsyncCallback* callback,
        app::Object* object
    )
    IL2CPP_REGISTER_METHOD(0x00F550D0, app::BlockState__Enum, EndInvoke, app::DeflateManager_CompressFunc* this_ptr, app::IAsyncResult* result)
} // namespace app::classes::Ionic::Zlib::DeflateManager_CompressFunc
