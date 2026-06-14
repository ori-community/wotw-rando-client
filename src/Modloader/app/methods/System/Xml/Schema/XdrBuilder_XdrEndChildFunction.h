#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/XdrBuilder.h>
#include <Modloader/app/structs/XdrBuilder_XdrEndChildFunction.h>

namespace app::classes::System::Xml::Schema::XdrBuilder_XdrEndChildFunction {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, app::XdrBuilder_XdrEndChildFunction* this_ptr, app::Object* object, void* method_1)
    IL2CPP_REGISTER_METHOD(0x00673B90, void, Invoke, app::XdrBuilder_XdrEndChildFunction* this_ptr, app::XdrBuilder* builder)
    IL2CPP_REGISTER_METHOD(
        0x00674080,
        app::IAsyncResult*,
        BeginInvoke,
        app::XdrBuilder_XdrEndChildFunction* this_ptr,
        app::XdrBuilder* builder,
        app::AsyncCallback* callback,
        app::Object* object
    )
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, app::XdrBuilder_XdrEndChildFunction* this_ptr, app::IAsyncResult* result)
} // namespace app::classes::System::Xml::Schema::XdrBuilder_XdrEndChildFunction
