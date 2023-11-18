#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/XsdBuilder_XsdEndChildFunction.h>
#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/XsdBuilder.h>

namespace app::classes::System::Xml::Schema::XsdBuilder_XsdEndChildFunction {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::XsdBuilder_XsdEndChildFunction * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x00673B90, void, Invoke, (app::XsdBuilder_XsdEndChildFunction * this_ptr, app::XsdBuilder* builder))
    IL2CPP_REGISTER_METHOD(0x00674080, app::IAsyncResult*, BeginInvoke, (app::XsdBuilder_XsdEndChildFunction * this_ptr, app::XsdBuilder* builder, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::XsdBuilder_XsdEndChildFunction * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::System::Xml::Schema::XsdBuilder_XsdEndChildFunction
