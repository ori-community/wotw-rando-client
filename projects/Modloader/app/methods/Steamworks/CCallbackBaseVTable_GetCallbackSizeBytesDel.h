#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CCallbackBaseVTable_GetCallbackSizeBytesDel.h>
#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::Steamworks::CCallbackBaseVTable_GetCallbackSizeBytesDel {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::CCallbackBaseVTable_GetCallbackSizeBytesDel * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x00F55110, int32_t, Invoke, (app::CCallbackBaseVTable_GetCallbackSizeBytesDel * this_ptr, void* thisptr))
    IL2CPP_REGISTER_METHOD(0x015F7880, app::IAsyncResult*, BeginInvoke, (app::CCallbackBaseVTable_GetCallbackSizeBytesDel * this_ptr, void* thisptr, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00F550D0, int32_t, EndInvoke, (app::CCallbackBaseVTable_GetCallbackSizeBytesDel * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::Steamworks::CCallbackBaseVTable_GetCallbackSizeBytesDel
