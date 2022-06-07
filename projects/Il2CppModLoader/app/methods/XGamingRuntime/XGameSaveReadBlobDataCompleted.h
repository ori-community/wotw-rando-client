#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::XGamingRuntime::XGameSaveReadBlobDataCompleted {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::XGameSaveReadBlobDataCompleted * this_ptr, app::Object * object, void * method_1))
    IL2CPP_REGISTER_METHOD(0x015C22A0, void, Invoke, (app::XGameSaveReadBlobDataCompleted * this_ptr, int32_t hresult, app::XGameSaveBlob__Array * blobs))
    IL2CPP_REGISTER_METHOD(0x030BB1C0, app::IAsyncResult *, BeginInvoke, (app::XGameSaveReadBlobDataCompleted * this_ptr, int32_t hresult, app::XGameSaveBlob__Array * blobs, app::AsyncCallback * callback, app::Object * object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::XGameSaveReadBlobDataCompleted * this_ptr, app::IAsyncResult * result))
}
